#include <iostream>
using namespace std;

void func()
{

    int N = 0, aci = 97, lexi = 0;

    cin >> N;
    lexi = N + aci;

    for (int i = 0; i < N; i++)
    {
        lexi -= 1;
        cout << (char)lexi;
    }
}

int main()
{
    func();
    return 0;
}