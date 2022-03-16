#include <iostream>
#include <cstring>
#include <string>
using namespace std;


void vowelCounter(string str){
int count = 0;
string vowels = "AaEeOoUuIi";

for (int i = 0; i < str.length(); i++)
{
    for (int j = 0; j < vowels.length(); j++)
    {
        if (str[i] == vowels[j])
        {
            count++;
        }
        
    }
    
    
}

cout<<count;


}

int main()
{
    
   string str;

   getline(cin,str);

   vowelCounter(str);


   return 0;
}

//Dcoder , A mobile coding platform.