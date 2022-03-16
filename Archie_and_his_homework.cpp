#include <iostream>
#include <cmath>
using namespace std;

void func()
{

    int numi, denom;

    cin >> numi >> denom;

    if (denom % numi == 0) //when both numbers are dividable with each other.
    {
        cout << numi / numi << " ";
        cout << denom / numi;
    }

    else
    { //When both numbers are'nt dividable with each other.
        for (int i = 2; i < 11; i++)
        {
            if ((denom % i == 0) && (numi % i == 0))
            {
                denom = denom / i;
                numi = numi / i;
            }
        }
        cout << numi << " " << denom;
    }
}

int main()
{
    func();

    return 0;
}
