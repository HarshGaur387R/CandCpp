#include <iostream>
using namespace std;

int jumps(int n, int x)
{

    int left = 0, right = 0;

    int total_sets = n / 2;
    left = x / 2;
    right = total_sets - left;

    if (right >= left)
        return left;
    else
    {
        return right;
    }
}

int main()
{

    cout << jumps(11, 7) << endl;

    return 0;
}

/* for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            // cout << "i :" << i << " =>" << i % 2 << endl;
            countFromLeft++;
        }
    } */