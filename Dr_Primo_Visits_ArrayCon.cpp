#include <iostream>
using namespace std;

void func()
{
    int Size, j;
    int arr[1000];
    int count;

    cin >> Size;

    for (int i = 0; i < Size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < Size; i++)
    {
        for (j = 2; j <= 11; j++)
        {
            if (arr[i] == 1)
            {
                goto B;
            }

            if (arr[i] != j)
            {
                if (arr[i] % j == 0)
                {
                    goto A;
                }
            }
        }
        count++;
    A:
    B:
        j = 2;
    }
    cout << count;
}

int main()
{

    func();

    return 0;
}