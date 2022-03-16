#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;

void mainmenu();

void flushFor_ifstream(ifstream &read) // clearing and closing argument ifstream variable.
{
    read.clear();
    read.seekg(0);
    read.close();
}

void open(string &current_Location, vector<string> &vec2) // --> o
{
    cout << "\n▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n"
         << "~HOME" << current_Location
         << "\n▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n";

        /// Complete this shit.
}

void creating() // --> c
{
}

void deleting() // --> d
{
}

void back() // --> b
{
}

char ButtonOptions()
{
    char ENTER_OPP_CHAR;

    cout << "\n________________________________________\n"
         << "(d)Delete, (c)Create\n"
         << "(m)Main menu , (b)Back , (o)Open\n"
         << "Enter >>";
    cin >> ENTER_OPP_CHAR;

    return ENTER_OPP_CHAR;
}

void readingFile_For_Vec1(string filename, vector<string> &vec1)
{
    vec1.clear();

    string Extrastr;
    ifstream read2;
    read2.open(filename);

    while (getline(read2, Extrastr))
    {
        if (Extrastr != "")
            vec1.push_back(Extrastr);
    }

    flushFor_ifstream(read2);
}

void readingFile_For_Vec2(string filename, vector<string> &vec2)
{
    vec2.clear();

    string Extrastr;
    ifstream read2;
    read2.open(filename);

    while (getline(read2, Extrastr))
    {
        if (Extrastr != "" && Extrastr.at(0) != '/')
            vec2.push_back(Extrastr);
    }

    flushFor_ifstream(read2);
}

void exiting() // OP - 3
{
}

void about() // OP - 2
{
}

void showfolders() // OP - 1
{
    string filename = "vector.txt";
    vector<string> vec1;
    vector<string> vec2;
    string current_Location;
    int namesize, rl;
    string ExtraStr;

    int flag = 0, total = 0;

    ofstream write(filename, ios::app);

    if (!write.is_open()) // Checking file is created or not.
    {
        cout << "\n_________________________________________________\n";
        cout << "\nFile Not Found : Error No. 301\n"; // Error Mssg.
        cout << "Please Send FeedBack to the developer -Harsh Gaur\n";
        cout << "\n_________________________________________________\n";
        exit(0);
    }
    write.close();

    ifstream read;
    read.open(filename);

    if (read.peek() == ifstream ::traits_type ::eof()) // Checking if File is empty so write some pre-defind folders or files in Folders_Name_holder_file.txt
    {
        cout << "arey yaar\n";
        read.close();
        write.open(filename); // opening a file with ofstream so we can write some predefind folders.

        write << "Downlaod"
              << "\n";
        write << "VScode"
              << "\n";
        write << "Dcoder";
        write.close();
    }
    read.open(filename);

    readingFile_For_Vec1(filename, vec1);
    readingFile_For_Vec2(filename, vec2);

    cout << "\n════════════════════════════════════\n"
         << "~FOLDERS/HOME\n"
         << "════════════════════════════════════\n";

    int num1 = 0;

    for (string &x : vec2)
    {
        cout << num1++ << ") " << x << endl;
    }

    char ENTER_OPP_CHAR = ButtonOptions();

    if (ENTER_OPP_CHAR == 'm' || ENTER_OPP_CHAR == 'M')
    {
        mainmenu();
    }
    else if (ENTER_OPP_CHAR == 'o' || ENTER_OPP_CHAR == 'O')
    {
        open(current_Location, vec2);
    }
    else if (ENTER_OPP_CHAR == 'b' || ENTER_OPP_CHAR == 'B')
    {
    }
    else if (ENTER_OPP_CHAR == 'd' || ENTER_OPP_CHAR == 'D')
    {
    }
}

void mainmenu() // --> m
{
    int op;

    cout << "\n════════ ► HG FILE MANAGER ◄ ════════\n"
         << "―――――――――――――――――――――――――――――――――――――\n";
    cout << "1) Show Folders" << endl
         << "2) About HGs File Manager" << endl
         << "3) Exit" << endl
         << "Please enter the correct index number >>";
    cin >> op;

    switch (op)
    {
    case 1:
        showfolders();
        break;

    case 2:
        about();
        break;

    case 3:
        exiting();
        break;
    }
}

void filemanager()
{
    mainmenu();
}

int main()
{
    filemanager();
}