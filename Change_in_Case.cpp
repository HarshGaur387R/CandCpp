#include <iostream>
#include <cctype>
using namespace std;

void func()
{

    int len, x, y;
    cin >> len;
    char arr[len];
    cin >> arr;
    cin >> x >> y;

    for (int i = 0; i < len; i++)
    {
        if (i == x || i == y)
        {
            if (isupper(arr[i]))
            {
                arr[i] = tolower(arr[i]);
            }
            else
            {
                arr[i] = toupper(arr[i]);
            }
        }
        cout << arr[i];
    }
}

int main()
{

    func();
    return 0;
}