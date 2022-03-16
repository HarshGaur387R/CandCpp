#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void func(string str)
{

    int temp = 1;

    string str2;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str2.length(); j++)
        {

            if (str[i] == str2[j])
            {
                goto last;
            }
        }

        str2 += str[i];

    last:
    
        temp++;
    }

    cout << str2;
}

int main()
{

    string str;

    getline(cin, str);

    func(str);

    return 0;
}

//str = AaabBbbc
//str2= Aa