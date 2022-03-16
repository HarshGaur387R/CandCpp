#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string getdata;

    //Writing File
    ofstream fcout("TestFile1.txt"); //Making object of class ofstream and calling its constructor. its use for only writing files.
                                     //NOTE : ofstream automatically create a new File.

    fcout << "Hello World !!"; //Writing content in File.
    fcout.close();             //Closing file i good practice.

    //Reading File
    ifstream fcin("TestFile2.txt"); //Opening an already created file for reading the content.
                                    //NOTE : You need to create a file before reading it.
    getline(fcin, getdata);         //getline function used to take whole line from file. You can use fcin>>getdata for
    cout << getdata;                //Now printing data of TestFile2.txt

    return 0;
}