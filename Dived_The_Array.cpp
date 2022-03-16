#include <iostream>
#include <cstdlib>
using namespace std;

void func()
{
    int n;

    int *arr;

    cin >> n;

    arr = (int*) malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 1; j < n; j=j+2)
    {
        if (arr[j] % 2 == 0)
        {
            cout << arr[j];
            if (j + 1 != n)
            {
                cout << " ";
            }
        }
    }
}

int main()
{
    func();

    return 0;
}