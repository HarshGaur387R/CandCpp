#include <iostream>
using namespace std;

void func()
{

    int t;
    int numberOfStudents[1000];
    int numberOfBooks[1000];

    cin >> t;

    for (int i = 0; i < t; i++)
    {

        cin >> numberOfStudents[i] >> numberOfBooks[i];
    }

    for (int i = 0; i < t; i++)
    {

        if (numberOfBooks[i] % numberOfStudents[i] == 0)
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