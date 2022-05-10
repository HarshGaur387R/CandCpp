#include <iostream>
#include <cmath>
using namespace std;

int ss(int n)
{
    long long int num = ((long long)n * ((long long)n + 1) / 2);

    return num;
}

int main()
{

    cout << ss(46341);
    return 0;
}