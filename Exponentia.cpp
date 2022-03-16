#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int a;
    int b = 0;

    cin >> a;

    if (a >= 0)
    {
        for (int i = 0; i <= a; i++)
        {
            cout << pow(2, i);
            if (i < abs(a))
            {
                cout << ",";
            }
        }
    }

    if (a < 0)
    {

        for (int i = 0; i <= abs(a); i++)
        {
            if (pow(2, b) == 1)
            {
                cout << "1.0";
            }

            else if (pow(2, b) != 1)
            {
                cout << pow(2, b);
            }

            if (i < abs(a))
            {
                cout << ",";
            }

            b = b - 1;
        }
    }

    return 0;
}