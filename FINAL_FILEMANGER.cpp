#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

void file_creater(string filename, string current_loc, vector<string> &vc1, int &SIZE)
{
    int howMany = count(current_loc.begin(), current_loc.end(), '/'), format = 1;
    static int diff = 0;
    static int diff2 = 0;
    string diffstr = to_string(diff);
    string diffstr2 = to_string(diff2);
start:
    cout << "Enter Your File Name :";
    string name;
    cin >> name;

    for (int i = 0; i < name.size(); i++)
    {
        if (ispunct(name.at(i)) || isspace(name.at(i)) || isblank(name.at(i)))
        {
            cout << "Please do not enter any puntuation, space, blank or graph : " << endl;
            goto start;
        }
    }

    cout << "\nEnter Your file format :"
         << "\n1) for .txt"
         << "\n2) for .bin"
         << "\n3) for .dat" << endl;

    cin >> format;

    switch (format)
    {
    case 1:
        name += ".txt";
        break;
    case 2:
        name += ".bin";
        break;
    case 3:
        name += ".dat";
        break;
    }

    string tester = current_loc + "/" + name;

    for (string &x : vc1)
    {
        if (x == tester)
        {
            name += diffstr;
            cout << "NAME : " << name << endl;
            ++diff;
        }
    }

    // Make a check here for safe format name ===>

    if (current_loc == "")
    {
        string tester1 = name;

        for (string &x : vc1)
        {
            if (x == tester1)
            {
                name += diffstr2;
                cout << "NAME : " << name << endl;
                ++diff2;
            }
        }

        vc1.push_back(name);

        ofstream write;
        write.open(filename);

        for (string &y : vc1)
        {
            write << y << endl;
        }
        SIZE = vc1.size();

        write.clear();
        write.seekp(0);
        write.close();
    }

    else if (current_loc.at(0) == '/' && howMany == 1)
    {
        current_loc.erase(0, 1);
        auto i = find(vc1.begin(), vc1.end(), current_loc);

        if (i != vc1.end())
        {

            // calculating the index
            // of K
            int index = i - vc1.begin();
            vc1.insert(vc1.begin() + index + 1, "/" + current_loc + "/" + name);

            for (string &x : vc1)
            {
                cout << x << endl;
            }

            ofstream write;
            write.open(filename);

            for (string &y : vc1)
            {
                write << y << endl;
            }
            SIZE = vc1.size();

            write.clear();
            write.seekp(0);
            write.close();
        }

        else
        {
            // If the element is not
            // present in the vector
            cout << " ERROR : -1 (INFORMED TO THE DEVELOPER)" << endl;
        }
    }

    else if (current_loc.at(0) == '/' && howMany > 1)
    {
        auto i = find(vc1.begin(), vc1.end(), current_loc);

        if (i != vc1.end())
        {

            // calculating the index
            // of K
            int index = i - vc1.begin();
            vc1.insert(vc1.begin() + index + 1, current_loc + "/" + name);

            for (string &x : vc1)
            {
                cout << x << endl;
            }

            ofstream write;
            write.open(filename);

            for (string &y : vc1)
            {
                write << y << endl;
            }
            SIZE = vc1.size();

            write.clear();
            write.seekp(0);
            write.close();
        }

        else
        {
            // If the element is not
            // present in the vector
            cout << " ERROR : -1 (INFORMED TO THE DEVELOPER)" << endl;
        }
    }
    ofstream out(name, ios ::app);
    out.close();
}

void folder_creating(string filename, string current_loc, vector<string> &vc1, int &SIZE)
{
    int howMany = count(current_loc.begin(), current_loc.end(), '/');
    static int diff = 0;
    static int diff2 = 0;
    string diffstr = to_string(diff);
    string diffstr2 = to_string(diff2);
start:

    cout << "Enter your folder name :";
    string name;
    cin >> name;

    for (int i = 0; i < name.size(); i++)
    {
        if (ispunct(name.at(i)) || isspace(name.at(i)) || isblank(name.at(i)))
        {
            cout << "Please do not enter any puntuation, space, blank or graph : " << endl;
            goto start;
        }
    }

    string tester = current_loc + "/" + name;

    for (string &x : vc1)
    {
        if (x == tester)
        {
            name += diffstr;
            cout << "NAME : " << name << endl;
            ++diff;
        }
    }

    // Make a check here for safe format name ===>

    if (current_loc == "")
    {
        string tester1 = name;

        for (string &x : vc1)
        {
            if (x == tester1)
            {
                name += diffstr2;
                cout << "NAME : " << name << endl;
                ++diff2;
            }
        }

        vc1.push_back(name);

        ofstream write;
        write.open(filename);

        for (string &y : vc1)
        {
            write << y << endl;
        }
        SIZE = vc1.size();

        write.clear();
        write.seekp(0);
        write.close();
    }

    else if (current_loc.at(0) == '/' && howMany == 1)
    {
        current_loc.erase(0, 1);
        auto i = find(vc1.begin(), vc1.end(), current_loc);

        if (i != vc1.end())
        {

            // calculating the index
            // of K
            int index = i - vc1.begin();
            vc1.insert(vc1.begin() + index + 1, "/" + current_loc + "/" + name);

            for (string &x : vc1)
            {
                cout << x << endl;
            }

            ofstream write;
            write.open(filename);

            for (string &y : vc1)
            {
                write << y << endl;
            }
            SIZE = vc1.size();

            write.clear();
            write.seekp(0);
            write.close();
        }

        else
        {
            // If the element is not
            // present in the vector
            cout << " ERROR : -1 (INFORMED TO THE DEVELOPER)" << endl;
        }
    }

    else if (current_loc.at(0) == '/' && howMany > 1)
    {
        auto i = find(vc1.begin(), vc1.end(), current_loc);

        if (i != vc1.end())
        {

            // calculating the index
            // of K
            int index = i - vc1.begin();
            vc1.insert(vc1.begin() + index + 1, current_loc + "/" + name);

            for (string &x : vc1)
            {
                cout << x << endl;
            }

            ofstream write;
            write.open(filename);

            for (string &y : vc1)
            {
                write << y << endl;
            }
            SIZE = vc1.size();

            write.clear();
            write.seekp(0);
            write.close();
        }

        else
        {
            // If the element is not
            // present in the vector
            cout << " ERROR : -1 (INFORMED TO THE DEVELOPER)" << endl;
        }
    }
}

void fileRemover(vector<string> vec1) // write code in folder delete function for passsing only '.' containing string
{
    string filenameBefore;
    string tempfile;
    string filenameAfter;

    int f = 0, lol = 0;

    for (int i = 0; i < vec1.size(); i++)
    {
        if (vec1[i].at(0) == '/')
        {
            if (vec1[i].find(".") > 0 && vec1[i].find(".") < vec1[i].length())
            {
                f = vec1[i].find(".");
                for (int j = f - 1; lol != 1; j--)
                {
                    if (vec1[i].length() == 0 || vec1[i].at(j - 1) == '/')
                    {
                        lol = 1;
                    }
                    filenameBefore += vec1[i].at(j);
                }

                for (int j = filenameBefore.length() - 1; j >= 0; j--)
                {
                    tempfile += filenameBefore.at(j);
                }

                lol = 0;
                for (int j = f; lol != 1; j++)
                {
                    if (j + 1 == vec1[i].length() || vec1[i].at(j + 1) == '/')
                    {
                        lol = 1;
                    }
                    filenameAfter += vec1[i].at(j);
                }
            }
            f = 0;
            filenameBefore = tempfile + filenameAfter;
            // cout << filenameBefore << endl;
            remove(filenameBefore.c_str());
        }

        else
        {
            remove(vec1[i].c_str());
            // cout << vec1[i] << endl;
        }
    }
}

void folder_Delete_Button(vector<string> &vec1, string main_FILENAME, int where, int &strsize)
{
    ofstream LocalWrite(main_FILENAME);
    ifstream LocalRead(main_FILENAME);
    int total = 0, I_am_tired = 0;
    string temp;
    vector<string> tempVEC(1);

    if (vec1.empty() == true)
    {
        cout << "ERROR : given string array is NULL\n";
        exit(0);
    }

    if (vec1[where].find(".") > 0 && vec1[where].find(".") < vec1[where].length())
    {
        tempVEC[0] = vec1[where];
        fileRemover(tempVEC);
    }

    if (vec1[where].at(0) != '/')
    {
        temp = '/';
        temp += vec1[where];
    }
    else
    {
        temp += vec1[where];
    }

    for (int k = 0; k < where; k++)
    {
        LocalWrite << vec1[k] << "\n";
        I_am_tired++;
    }

    for (int i = where + 1; i < strsize; i++)
    {
        int flag = 0, ok = 0;

        if (temp.length() >= vec1[i].length())
        {
            goto A;
        }

        for (int j = 0; j < temp.length(); j++)
        {

            if (total == temp.length() - 1 && vec1[i].at(j + 1) == '/')
            {
                ok = 1;
                goto end;
            }

            if (vec1[i].at(j) == temp.at(j))
            {
                total++;
            }
        }

    A:
    end:
        if (ok == 0)
        {
            LocalWrite << vec1[i];

            if (i + 1 != strsize)
            {
                LocalWrite << endl;
            }

            I_am_tired++;
        }
        else if (ok == 1)
        {
            if (vec1[i].find(".") > 0 && vec1[i].find(".") < vec1[i].length()) //==>NEW
            {
                tempVEC[0] = vec1[i];
                fileRemover(tempVEC);
            } //
        }

        total = 0;
    }

    strsize = I_am_tired;
    vec1.resize(strsize);
    LocalWrite.clear();
    LocalWrite.seekp(0);
    LocalWrite.close();

    int i = 0;
    while (getline(LocalRead, vec1[i]))
    {
        i++;
    }
    LocalRead.clear();
    LocalRead.seekg(0);
    LocalRead.close();
}

void back_button(string &current_location) // BACKBUTTON FOR SENDING BACK
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

void file_opening(string str_F) // FILE OPENING FUNCTION~
{
    string str_F_content;
    string str_F_content_by_user;
    int T, T2;

    ofstream ofFILE(str_F, ios::app);
    ofFILE.close();
again:
again2:
    cout << "\n__________________________________\n"
         << "(1) for read : \n"
         << "(2) for write : \n"
         << "(3) for back : \n"
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

    else if (T == 3)
    {
    }

    else if(T > 4)
    {
        cout << "Enter only correct value :\n";
        goto again; // risk
    }
}

void folder_File_Showing(vector<string> vec1, vector<string> &vec2, string current_Location, int namesize, int &rl) // FOLDER OR FILE SHOWING FUNCTION~
{
    string ExtraStr;
    int flag = 0, total = 0;

    for (int i = 0; i < namesize; i++)
    {
        total = 0, flag = 0;
        ExtraStr = "";
        for (int j = 0; j < vec1[i].length(); j++)
        {
            if (vec1[i].length() <= current_Location.length())
            {
                goto B;
            }

            if (j < current_Location.length())
            {

                if (current_Location.at(j) == vec1[i].at(j))
                {
                    total++;
                }
            }

            if (total == current_Location.length() && vec1[i].at(total) == '/')
            {
                if (j == total - 1)
                {
                    continue;
                }

                if (vec1[i].at(j) == '/' && j == total)
                {
                    flag++;
                    continue;
                }

                if (vec1[i].at(j) == '/')
                {
                    goto A;
                }

                ExtraStr += vec1[i].at(j);
            }
        }
    B:
    A:
        if (flag == 1)
        {
            if (ExtraStr == vec2[rl - 1])
            {
                continue;
            }

            else
            {
                vec2[rl] = ExtraStr;
                cout << rl << ")" << vec2[rl] << endl; // Printing Folders and file.
                rl++;
            }
        }
    }
    if (rl == 0)
    {
        cout << "            EMPTY      " << endl;
    }
}

void fileManeger() // FILE MANAGER FUNCTION~
{
    int rl = 0, After_deleteFlag = 0; // It contains the number of files & folders inside a folder.
    int folders_NameSize = 0;         // Increase +1 Size when new folder or file created.
    //* int index_For_ALH = 0;
    string current_Location; // Storing the current location of folder or file for display.
    //* string *all_Locations_History = new string[100]; //Storing all folders location history (ALH).
    string checking;
    string countor_for_fN;
    // string *folders_Name;  //Array of String for storing the name of folders and files.
    // string *folders_Name2; //Another array of string to store the first array data when we increasing size of first data.
    // string *folders_Name3 = new string[folders_NameSize]; //This array help to resize folders_Name1.
    ofstream ofoldersName_in_File("TESTING.txt", ios::app); // opening file in starting to create a fill its not exist.
    ofoldersName_in_File.close();                           // Closing file so ifstream can open the file.

    ifstream ifoldersName_in_File;
    ifoldersName_in_File.open("TESTING.txt"); // Opening file in ifstream for displaying pre defined folders.

    if (!ifoldersName_in_File.is_open()) // Checking file is created or not.
    {
        cout << "\n_________________________________________________\n";
        cout << "\nFile Not Found : Error No. 301\n"; // Error Mssg.
        cout << "Please Send FeedBack to the developer -Harsh Gaur\n";
        cout << "\n_________________________________________________\n";
        exit(0);
    }

    if (ifoldersName_in_File.peek() == ifstream ::traits_type ::eof()) // Checking if File is empty so write some pre-defind folders or files in Folders_Name_holder_file.txt
    {
        ifoldersName_in_File.close();
        ofoldersName_in_File.open("TESTING.txt"); // opening a file with ofstream so we can write some predefind folders.

        ofoldersName_in_File << "Downlaod\n/Download/Mytext.txt\n/Download/PlayStore\n/Download/PlayStore/new\n/Download/PlayStore/new/ied\nVSCode\nDcoder\nversion\n/version/normal\n/version/normal/extra\nalgebra\nNewDelhi\n/NewDelhi/citizen\nalco.txt\n";
        ofoldersName_in_File.close();
    }

    /////READING FILE TO KNOW HOW MANY STRINGS IT HAVE AND THEN GETTING DATA FROM STRING///////555/////////
    ifoldersName_in_File.open("TESTING.txt");
    ifoldersName_in_File.clear();
    ifoldersName_in_File.seekg(0);

    while (getline(ifoldersName_in_File, countor_for_fN))
    {
        if (countor_for_fN != "")
        {
            folders_NameSize++;
        }
    }

    ifoldersName_in_File.clear();
    ifoldersName_in_File.seekg(0);

    vector<string> vec1(folders_NameSize); //+1

    vector<string> vec2(folders_NameSize); //+1

    for (int i = 0; i < folders_NameSize; i++)
    {
        getline(ifoldersName_in_File, vec1[i]);
    }

    ifoldersName_in_File.close();
    ////////////////////////////////////////////////////////////////////////////////////////////555->//////

    string new_FileName; // New files name store here for first.
    string new_Folder;   // New folder name store here for first.

Main_Menu:
    current_Location = "";
    int opp = 0;

    cout << "\n════════ ► HG FILE MANAGER ◄ ════════\n"
         << "―――――――――――――――――――――――――――――――――――――\n";

    while (1) // Infinite Loop
    {

        if (opp == 0) // Main Menu
        {
            cout << "1) Show Folders" << endl
                 << "2) About HGs File Manager" << endl
                 << "3) Exit" << endl
                 << "Please enter the correct index number >>";
            cin >> opp;
        }

        else if (opp == 1) // Showing Folders - Strarting of (Show Folders)
        {
         Main_Menu2:
            char ENTER_OPP_CHAR;
            int ENTER_OPP_INT;

            ifoldersName_in_File.open("TESTING.txt");

            cout << "\n════════════════════════════════════\n"
                 << "~FOLDERS/HOME\n"
                 << "════════════════════════════════════\n";

            int i = 0, j = 0;
            while (getline(ifoldersName_in_File, countor_for_fN))
            {
                if (countor_for_fN != "")
                {
                    vec1[i] = countor_for_fN;
                    if (!(vec1[i].find('/') >= 0 && vec1[i].find('/') <= vec1[i].length()))
                    {
                        vec2[j] = vec1[i];
                        cout << j << ")" << vec2[j] << endl; // Printing Folders and files name but not nested folders and files.
                        j++;
                    }
                    i++;
                }
            }
            i = 0, j = 0;
            // cout<<vec2.size()<<endl; //===>

        A:
        B:
            rl = 0;
            cout << "\n_______________________________________________________\n"
                 << "FOR FOLDERS ENTER :(d)Delete folder, (c)Create folder\n"
                 << "FOR FILE ENTER    :(x)Create file\n"
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
                int where = 0; //=====>new
                cout << "ENTER INDEX NUMBER >>";
                cin >> where;

                for (int i = 0; i < vec1.size(); i++)
                {
                    if (strstr(vec1[i].c_str(), vec2[where].c_str()))
                    {
                        where = i;
                        goto lol;
                    }
                }
                i = 0;
            lol:

                folder_Delete_Button(vec1, "TESTING.txt", where, folders_NameSize);
                vec2.resize(folders_NameSize);

                // cout << vec1.size() << " " << vec2.size() << endl;
                goto after_delete;
            }

            else if (ENTER_OPP_CHAR == 'c' || ENTER_OPP_CHAR == 'C')
            {
                folder_creating("TESTING.txt", current_Location, vec1, folders_NameSize);

                goto after_creatingFolder;
            }

            else if (ENTER_OPP_CHAR == 'x' || ENTER_OPP_CHAR == 'X')
            {
                file_creater("TESTING.txt", current_Location, vec1, folders_NameSize);
                goto afterFilecreater;
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
                current_Location += vec2[ENTER_OPP_INT];

            afterFilecreater:
            after_creatingFolder:
            after_delete:
            back:

                if (current_Location == "")
                {
                    goto Main_Menu2;
                }

                cout << "\n▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n"
                     << "~HOME" << current_Location
                     << "\n▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n";

                if (current_Location.find('.') >= 0 && current_Location.find('.') <= current_Location.length()) // Checking String is a File or not.
                {
                    file_opening(vec2[ENTER_OPP_INT]);
                    goto B;
                }
                else
                {
                    folder_File_Showing(vec1, vec2, current_Location, folders_NameSize, rl);
                    goto A;
                    exit(0);
                }
            }

            // COMPLETE THE CODE TO OPEN THE FOLDER ~

            exit(0);
        }

        else if(opp == 2){
            cout<<"\n▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n"
                <<"WARNING : THIS PROGRAM IS CONTAINING LOT OF BUGS\n"
                <<"DEVELOPER : HARSH GAUR\n"
                <<"RELEASE DATE : Nov-26-2021\n"
                <<"VERSION : NASTY.1.0\n"
                <<"\nOVERVIEW : I know this code isn't\n"
                <<"perfect because i started this project\n"
                <<"in my learning days actually i am still\n"
                <<"learning but this time i am more ready\n"
                <<"after learning STL in c++. So you are\n"
                <<"free to fork this code and create some changes\n"
                <<"this project took 3 months and this is my\n"
                <<"first gaint titan project. By the way this\n"
                <<"nasty project gives me lot of experiance.\n"
                <<"And sorry for my bad english ☻\n"
                <<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n";
                exit(0);
        }

        else if (opp == 3)
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