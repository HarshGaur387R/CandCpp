#include <iostream>
using namespace std;

void func()
{

    int N = 0, X = 0, temp = 0;

    cin >> N >> X;
    N = N - 1;
    temp = N / 2;

    if (X > N / 2)
    {
        cout << (X - temp)-1;
    }

    else
    {
        cout << (X + temp)+1;
    }
}

int main()
{
    func();

    return 0;
}