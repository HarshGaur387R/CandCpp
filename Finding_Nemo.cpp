#include <iostream>
using namespace std;

void func()
{

    int num;
    cin >> num;

    string sar[num];

    for (int i = 0; i < num; i++)
    {
        cin >> sar[i];
    }

    for (int i = 0; i < num; i++)
    {
        if (sar[i] == "Nemo")
        {
            cout << i + 1;
            exit(0);
        }
    }
}

int main()
{
    func();
    return 0;
}