#include <iostream>
#include <algorithm>
using namespace std;

bool LinearSearch(char c) // Time complexity of this func. is O(1)
{
    char vowel[] = {'a', 'i', 'o', 'u', 'e'};

    for (int i = 0; i < 5; i++)
    {
        if (c == vowel[i])
        {
            return true;
        }
    }
    return false;
}

void func()
{
    string str;
    string str2;
    string c;

    cin >> str;

    if (LinearSearch(str.at(0)) == true)
    {
        str2 += str;
        str2 += "way";
        cout << str2;
        return;
    }
    else
    {
        c = str.at(0);
        str2 += str.substr(1, str.length());
        str2 += c;
        str2 += "ay";
        cout << str2;
        return;
    }
}

int main()
{

    func();
    return 0;
}
