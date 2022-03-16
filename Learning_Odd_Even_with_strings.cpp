#include <iostream>
using namespace std;

void func()
{

    int T = 0;
    cin >> T;
    int size = 0;
    string str[T];

    while (T--)
    {
        cin >> str[size++];
    }

    for (auto &&c : str)
    {
        string eStr, oStr;
        for (int i = 0; i < c.length(); i++)
        {
            if (i % 2 == 0)
            {
                eStr += c.at(i);
            }
            else if (i % 2 != 0)
            {
                oStr += c.at(i);
            }
        }
        cout << eStr << " " << oStr;
        cout << endl;
    }
}

int main()
{
    func();
    return 0;
}