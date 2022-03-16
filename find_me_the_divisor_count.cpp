#include <iostream>
using namespace std;

int func(int l, int h, int d){

int num=0;

for (int i = l; i <= h; i++)
{
    if (i%d == 0)
    {
        num++;
    }
    
}


return num;
}

int main()
{

  int l,h,d;

  cin>>l>>h>>d;

  cout<<func(l,h,d)<<endl;

    return 0;
}