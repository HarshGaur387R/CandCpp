#include <iostream>
using namespace std;

class Df
{
private:
    
public:
    int fib(int n);
    Df(/* args */);
    ~Df();
};

int Df::fib(int n){

    int ar[n+2];
    ar[0] = 0;
    ar[1] = 1;

    for(int i = 2; i<=n; i++){
        ar[i] = ar[i-1] + ar[i-2];
    }
    return ar[n];
}

Df::Df(/* args */)
{
}

Df::~Df()
{
}



int main()
{
    Df o;
    cout<<o.fib(7);
    return 0;
}