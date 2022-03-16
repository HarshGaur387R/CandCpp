#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cctype>
using namespace std;

void back_button(string &current_location) //BACKBUTTON FOR SENDING BACK
{
    string tempString;

    int flag = 0, j = 0;
    int where = 0;
    for (int i = current_location.length(); i > 0; i--)
    {
        if (current_location.at(i - 1) == '/' && where == 0)
        {
            where = i;
            flag = 1;
        }
        else if (flag == 1)
        {
            tempString += current_location.at(j);
            j++;
        }
    }
    current_location = tempString;
}

void file_opening(string str_F) //FILE OPENING FUNCTION~
{
    string str_F_content;
    string str_F_content_by_user;
    int T, T2;

    ofstream ofFILE(str_F, ios::app);
    ofFILE.close();

    cout << "\n__________________________________\n"
         << "(1) for read : \n"
         << "(2) for write : \n"
         << "Enter>>";
    cin >> T;
    cout << endl;
    if (T == 1)
    {
        cout << " ___________________________________" << endl
             << "|                FILE               |" << endl
             << "ˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉ" << endl;
        ifstream ifFILE;
        ifFILE.open(str_F);

        while (getline(ifFILE, str_F_content))
        {
            cout << str_F_content << endl;
        }
        ifFILE.close();
    }

    else if (T == 2)
    {
        ofFILE.open(str_F, ios::app);
        while (T2 != 1)
        {
            cout << "Enter your content :" << endl;
            getchar();
            getline(cin, str_F_content_by_user);
            ofFILE << str_F_content_by_user;
            ofFILE << endl;
            cout << "Enter 1 for exit or 2 for continue :";
            cin >> T2;
        }
        ofFILE.close();
    }
}

void folder_File_Showing(string str1[], string str3[], string current_Location, int namesize, int &rl) //FOLDER OR FILE SHOWING FUNCTION~
{
    string ExtraStr;
    int flag = 0, total = 0;

    for (int i = 0; i < namesize - 1; i++)
    {
        total = 0, flag = 0;
        ExtraStr = "";
        for (int j = 0; j < str1[i].length(); j++)
        {
            if (str1[i].length() <= current_Location.length())
            {
                goto B;
            }

            if (j < current_Location.length())
            {

                if (current_Location.at(j) == str1[i].at(j))
                {
                    total++;
                }
            }

            if (total == current_Location.length() && str1[i].at(total) == '/')
            {
                if (j == total - 1)
                {
                    continue;
                }

                if (str1[i].at(j) == '/' && j == total)
                {
                    flag++;
                    continue;
                }

                if (str1[i].at(j) == '/')
                {
                    goto A;
                }

                ExtraStr += str1[i].at(j);
            }
        }
    B:
    A:
        if (flag == 1)
        {
            if (ExtraStr == str3[rl - 1])
            {
                continue;
            }
            else
            {
                str3[rl] = ExtraStr;
                cout << rl << ")" << str3[rl] << endl; //Printing Folders and file.
                rl++;
            }
        }
    }
    if (rl == 0)
    {
        cout << "            EMPTY      " << endl;
    }
}

void fileManeger() //FILE MANAGER FUNCTION~
{
    int rl = 0;               //It contains the number of files & folders inside a folder.
    int folders_NameSize = 7; //Increase +1 Size when new folder or file created.
    //* int index_For_ALH = 0;
    string current_Location; //Storing the current location of folder or file for display.
    //* string *all_Locations_History = new string[100]; //Storing all folders location history (ALH).
    string checking;
    string *folders_Name = new string[folders_NameSize];  //Array of String for storing the name of folders and files.
    string *folders_Name2 = new string[folders_NameSize]; //Another array of string to store the first array data when we increasing size of first data.
    //string *folders_Name3 = new string[folders_NameSize]; //This array help to resize folders_Name1.
    ofstream ofoldersName_in_File("Folders_Name_HolderFile.txt", ios::app); //opening file in starting to create a fill its not exist.
    ofoldersName_in_File.close();                                           //Closing file so ifstream can open the file.

    ifstream ifoldersName_in_File;
    ifoldersName_in_File.open("Folders_Name_HolderFile.txt"); //Opening file in ifstream for displaying pre defined folders.

    if (!ifoldersName_in_File.is_open()) //Checking file is created or not.
    {
        cout << "\n_________________________________________________\n";
        cout << "\nFile Not Found : Error No. 301\n"; //Error Mssg.
        cout << "Please Send FeedBack to the developer -Harsh Gaur\n";
        cout << "\n_________________________________________________\n";
        exit(0);
    }

    if (ifoldersName_in_File.peek() == ifstream ::traits_type ::eof()) //Checking if File is empty so write some pre-defind folders or files in Folders_Name_holder_file.txt
    {
        ifoldersName_in_File.close();
        ofoldersName_in_File.open("Folders_Name_HolderFile.txt"); //opening a file with ofstream so we can write some predefind folders.

        folders_Name[0] = "Download"; //Pre Definde Folders Name
        ofoldersName_in_File << folders_Name[0] << "\n";
        folders_Name[1] = "VSCode";
        ofoldersName_in_File << folders_Name[1] << "\n";
        folders_Name[2] = "Dcoder";
        ofoldersName_in_File << folders_Name[2] << "\n";
        ofoldersName_in_File.close();
    }

    string new_FileName; //New files name store here for first.
    string new_Folder;   //New folder name store here for first.

Main_Menu:
    current_Location = "";
    int opp = 0;

    cout << "\n════════ ► HG FILE MANAGER ◄ ════════\n"
         << "―――――――――――――――――――――――――――――――――――――\n";

    while (1) //Infinite Loop
    {

        if (opp == 0) //Main Menu
        {
            cout << "1) Show Folders" << endl
                 << "2) Create Folder" << endl
                 << "3) Delete Folder" << endl
                 << "4) About HGs File Manager" << endl
                 << "5) Exit" << endl
                 << "Please enter the correct index number >>";
            cin >> opp;
        }

        else if (opp == 1) //Showing Folders - Strarting of (Show Folders)
        {
        Main_Menu2:
            char ENTER_OPP_CHAR;
            int ENTER_OPP_INT;
            ifstream ifoldersName_in_File;
            ifoldersName_in_File.open("Folders_Name_HolderFile.txt");

            int i = 0, j = 0;
            cout << "\n════════════════════════════════════\n"
                 << "~FOLDERS/HOME\n"
                 << "════════════════════════════════════\n";

            while (getline(ifoldersName_in_File, folders_Name[i]))
            {
                if (!(folders_Name[i].find('/') >= 0 && folders_Name[i].find('/') <= folders_Name[i].length()))
                {
                    folders_Name2[j] = folders_Name[i];
                    cout << j << ")" << folders_Name2[j] << endl; //Printing Folders and files name but not nested folders and files.
                    j++;
                }
                i++;
            }
        A:
        B:
            rl = 0;
            cout << "\n_______________________________________________________\n"
                 << "FOR FOLDERS ENTER :(d)Delete folder, (c)Create folder\n"
                 << "FOR FILE ENTER    :(z)Delete file , (x)Create file\n"
                 << "OR EXTRA          :(m)Main menu , (b)Back , (o)Open\n"
                 << "Enter >>";
            cin >> ENTER_OPP_CHAR;
            ifoldersName_in_File.close();

            if (ENTER_OPP_CHAR == 'm' || ENTER_OPP_CHAR == 'M')
            {
                cout << "\n"
                     << endl;
                goto Main_Menu;
            }

            else if (ENTER_OPP_CHAR == 'd' || ENTER_OPP_CHAR == 'D')
            {
                cout << "Not Available Yet\n"; //MAKE A FUNCTION TO DELETE FOLDERS ~COMPLETE THIS~
                exit(0);
            }

            else if (ENTER_OPP_CHAR == 'c' || ENTER_OPP_CHAR == 'C')
            {
                cout << "Not Available Yet\n"; //make a function to Create Folders
                exit(0);
            }

            else if (ENTER_OPP_CHAR == 'x' || ENTER_OPP_CHAR == 'X')
            {
                cout << "Not Available Yet\n"; //make a function to Create File
                exit(0);
            }

            else if (ENTER_OPP_CHAR == 'z' || ENTER_OPP_CHAR == 'Z')
            {
                cout << "Not Available Yet\n"; //make a function to Delete File
                exit(0);
            }
            else if (ENTER_OPP_CHAR == 'b' || ENTER_OPP_CHAR == 'B')
            {
                
                back_button(current_Location);
                goto back;
            }

            else if (ENTER_OPP_CHAR == 'o' || ENTER_OPP_CHAR == 'O')
            {
                cout << "ENTER THE INDEX NUMBER >>";
                cin >> ENTER_OPP_INT;

                current_Location += "/";
                current_Location += folders_Name2[ENTER_OPP_INT];
            
            back:
                if (current_Location == "")
                {
                    goto Main_Menu2;
                }

                cout << "\n▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n"
                     << "~HOME" << current_Location
                     << "\n▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n";


               if (current_Location.find('.') >= 0 && current_Location.find('.') <= current_Location.length()) //Checking String is a File or not.
                {
                    file_opening(folders_Name2[ENTER_OPP_INT]);  
                    goto B;
                }
                else
                {
                    folder_File_Showing(folders_Name, folders_Name2, current_Location, folders_NameSize, rl);
                    goto A;
                    exit(0);
                }
            }

            //COMPLETE THE CODE TO OPEN THE FOLDER ~

            exit(0);
        }

        else if (opp == 5)
        {
            cout << "\n▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n"
                 << "☺ Thanks for using HGs File Manager ☺\n"
                 << "▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n";
            exit(0);
        }

        // cin >> opp;
    }
}

int main()
{

    fileManeger();

    return 0;
}

//      nameHolderFile => string => output
//      input => string => nameHolderFile

//      ~HOME/Downloads/New/PlayStore

/*
           arr[ ]
              [0]Download
              [1]Download/L.pdf
              [2]Download/New
              [3]Download/New/opp.txt
              [4]Downlaod/New/nestedFolda

*/