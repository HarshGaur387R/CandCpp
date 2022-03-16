#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void func()
{

    string S;
    int Lnum = 97;   //Lower case ASCII number
    int Unum = 65;   //Upper case ASCII number
    int f = 0, temp = 0;

    cin >> S;

    if (S.length() == 1)
    {
        cout<<"YES";
        exit(0);
    }
    

    for (int j = 1; j <= 26; j++)
    {
        if (S.find(Lnum) < S.length())
        {
            f++;
        }

        else if (S.find(Unum) < S.length())
        {
            f++;
        }

        Lnum++;
        Unum++;
    }

    if (f == 26)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}

int main()
{

    func();
}
