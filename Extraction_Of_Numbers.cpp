#include <iostream>
#include <cctype>
using namespace std;

void func()
{

    int num;

    cin >> num;
    string arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < arr[i].length(); j++)
        {
            if (isdigit(arr[i].at(j)))
            {

                cout << arr[i].at(j) << " ";
            }
        }
    }
}

int main()
{
    func();
    return 0;
}