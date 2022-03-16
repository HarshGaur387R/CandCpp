#include <iostream>
#include <cstring>

using namespace std;

void func()
{
    int len = 0, rot = 0, temp = 0;
    cin >> len >> rot;
    int arr[10000];
    int arr2[10000];

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
        arr2[i] = 0;
    }

    for (int i = 0; i < len; i++)
    {
        if ((len - i) - 1 < rot)
        {
            temp = i - len;
        }

        arr2[temp + rot] = arr[i];
        temp++;
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr2[i]<<" ";
    }
}

int main()
{
    func();

    return 0;
}

// 1 2 3 4 5