#include <iostream>
using namespace std;

void func()
{

    int S;
    int arr[100];

    cin >> S;

    for (int i = 0; i < S; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < S; i++)
    {
        if (arr[i] == 0)
        {
            cout << "No";
            exit(0);
        }
    }

    cout << "Yes";
}

int main()
{
    func();

    return 0;
}