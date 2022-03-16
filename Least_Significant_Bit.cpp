#include <iostream>
using namespace std;

void func_LSB()
{

    int T = 0, R = 0;
    int A[100];
    int bin[100];

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> A[i];
    }

    for (int j = 0; j < T; j++)
    {
        for (int k = 0; A[j] > 0; k++)
        {
            bin[R] = A[j] % 2;
            A[j] = A[j] / 2;
            if (bin[R] == 1)
            {
                cout << "Yes" << endl;
                break;
            }
            else
            {
                cout << "No" << endl;
                break;
            }
        }
        R++;
    }
}

int main()
{
    func_LSB();
    return 0;
}