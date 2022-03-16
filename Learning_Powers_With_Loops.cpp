#include <iostream>
// include cmath for two step method
// #include <cmath> // step : 1
using namespace std;

int main()
{

    unsigned long long int a = 0, b = 0, total = 0;
    cin >> a >> b;

    // cout<<pow(a,b); step 2

    total = 1;

    for (int i = 0; i < b; i++)
    {
        total *= a;
    }
    cout << total << endl;

    return 0;
}
