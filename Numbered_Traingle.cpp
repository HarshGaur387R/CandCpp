#include <iostream>
using namespace std;

void func()
{

    int R;
    cin >> R;

    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
            if (j + 1 <= i)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{

    func();

    return 0;
}