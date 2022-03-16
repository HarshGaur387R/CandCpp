#include <iostream>
using namespace std;

void func()
{
    int T = 0;
    cin >> T;
    int ptr[T][100];

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> ptr[i][j];
        }
    }

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            if ((ptr[i][j] > 70) && (ptr[i][j + 1] > 50))
            {
                cout << "Pass" << endl;
            }

            else
            {
                cout << "Fail" << endl;
            }
        }
    }
}

int main()
{
    func();

    return 0;
}