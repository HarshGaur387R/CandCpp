#include <iostream>
#include <cstring>
#include <string>
#include <cctype>

using namespace std;

void nextfunc(string str){

int num=0;

for(int i = 0; i < str.length(); i++)
{
   num = str[i];
   num = num + 1;
   str[i] = (char)num;
   num = 0;     
}

cout<<str<<endl;

}

int main()
{
    
  string str;

  getline(cin,str);

  nextfunc(str);

    return 0;
}