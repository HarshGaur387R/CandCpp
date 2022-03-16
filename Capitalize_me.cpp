#include <iostream>
#include <cstring>
#include <string>
#include <cctype>

using namespace std;

void capitalize_func(string str){

int flag=0;

for (int i = 0; i < str.length(); i++)
{
    if(i == 0){
        str[i] = toupper(str[i]);
    }

    else if (str[i] == ' ')
    {
        flag = 1;
    }
    
    else if (flag == 1)
    {
        str[i] = toupper(str[i]);
        flag = 0;
    }
    

}

cout<<str<<endl;

}

int main()
{
 
   string str;

   getline(cin,str);

   capitalize_func(str);

   return 0;
}