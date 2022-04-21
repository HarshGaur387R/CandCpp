#include <iostream>
using namespace std;

int main()
{
    string s = "GfG1";
    int isLowercase = 0;
    int isUppercase = 0;
    int isNumbecase = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) >= 97 && s.at(i) <= 122) && isLowercase == 0)
        {
            isLowercase++;
        }
        else if ((s.at(i) >= 65 && s.at(i) <= 90) && isUppercase == 0)
        {
            isUppercase++;
        }
        else if ((s.at(i) >= 48 && s.at(i) <= 57) && isNumbecase == 0)
        {
            isNumbecase++;
        }
    }

    if (isLowercase + isUppercase + isNumbecase == 3)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}