#include <iostream>
#include <cstring>
using namespace std;

void func()
{

    int N = 0, l = 0, flag = 0, total = 0;
    cin >> N;

    string st[N];
    string subst[N];

    for (int i = 0; i < N; i++)
    {
        cin >> st[i] >> subst[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < st[i].length(); j++)
        {
            if (st[i].at(j) == subst[i].at(l))
            {
                flag = 1;
                total++;
            }

            if (total == subst[i].length())
            {
                cout << "Yes\n";
                goto B;
            }

            if (flag == 1)
            {

                if (st[i].at(j) != subst[i].at(l) && total < subst[i].length() && total > 0)
                {
                    cout << "No\n";
                    goto A;
                }

                if (st[i].at(j) == subst[i].at(l))
                {
                    l++;
                }
            }
        }

        if (total < subst[i].length())
        {
            cout << "No" << endl;
        }
    B:
    A:

        l = 0;
        total = 0;
    }
}

int main()
{
    func();

    return 0;
}
