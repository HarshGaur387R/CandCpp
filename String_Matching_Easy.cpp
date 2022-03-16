#include <iostream>
#include <cstring>

using namespace std;

void func()
{

    int N;
    cin >> N;
    char st[10][100];
    char sub[10][100];

    for (int i = 0; i < N; i++)
    {
        cin >> st[i] >> sub[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (strstr(st[i], sub[i]))
        {
            cout << "Yes\n";
        }

        else
        {
            cout << "No\n";
        }
    }
}

int main()
{
    func();

    return 0;
}
