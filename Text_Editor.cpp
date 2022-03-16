#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void func()
{

    int T;
    cin >> T;
    string S[T];

    for (int i = 0; i < T; i++)
    {
        cin>>S[i];
    }

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < (S + i)->length(); j++)
        {
           cout<<(char)toupper((S+i)->at(j));
        }
        cout<<endl;
    }
}

int main()
{

    func();

    return 0;
}