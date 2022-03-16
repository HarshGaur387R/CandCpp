#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int i = 0;
    string fileContent[10];
    ofstream fout("Foff.txt", ios::app);
    
    
    fout.close();
    

    ifstream fin("Foff.txt");
    
    if(fin.peek() == ifstream :: traits_type :: eof()){
        cout<<"File is Empty"<<endl;
    }

    if (!fin.is_open())
    {
        cout << "File not open" << endl;
    }

    else
    {

        while (getline(fin, fileContent[i]))
        {
            cout << fileContent[i] << endl; 
            i++;
        }
    }


    fin.close();

   
    return 0;
}