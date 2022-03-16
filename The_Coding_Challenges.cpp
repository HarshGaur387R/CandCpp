#include <iostream>
using namespace std;

void func(int num){

int a;

a = num*num;
a = a-num;

cout<<a;

}

int main()
{

  int a;

  cin>>a;

  func(a);


 return 0;
}