#include <iostream>
using namespace std;

void func(string str){

for (int i = 0; i < str.length(); i++)
{
    if(str.at(i) == '1'){
        cout<<"0";
    }

    else if(str.at(i) == '0')
    {
        cout<<"1";
    }
}

}

int main()
{

string str;

getline(cin,str);

func(str);


  return 0;
}