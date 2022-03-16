#include <iostream>
using namespace std;

void func(string str){

for (int i = str.length()-4; i >= 0; i--)
{
    
    cout<<str[i];

}


}

int main()
{

 string str;

 getline(cin,str);
 
 func(str);

 return 0;
}