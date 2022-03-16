#include <iostream>
using namespace std;

void func()
{

    int N = 0;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 4 == 0 && arr[i] % 100 != 0)
        {
            cout << "Yes\n";
        }
        else
        {
            if (arr[i] % 400 == 0 && arr[i] % 100 == 0)
            {
                cout << "Yes\n";
            }

            else if (arr[i] % 400 == 0)
            {
                cout << "Yes\n";
            }

            else
            {
                cout << "No\n";
            }
        }
    }
}

int main()
{
    func();
    return 0;
}