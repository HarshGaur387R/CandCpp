#include <iostream>
using namespace std;

class Df{

public:
int fib(int);

};

int Df::fib(int n){

    if(n==0)return 0;
    if(n==1)return 1;

    int a=0,b=1,c=0;


    for (int i = 2; i <= n; i++)
    {
        c = a + b;    
        a = b;
        b = c;
        
    }
    return c;
    
}

int main()
{
    Df o;
    cout<<o.fib(3);
    return 0;
}