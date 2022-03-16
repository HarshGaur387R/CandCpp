#include <iostream>
using namespace std;

int func(int num)
{
    int rev=0;
    int fake_num=num;

    for (; fake_num != 0 ;)
    {
        rev = rev*10 + fake_num%10;
        fake_num = fake_num/10;

    }
    
    return rev;
}

int main()
{
    
   int num;

   cin>>num;
   cout<<func(num);


    return 0;
}