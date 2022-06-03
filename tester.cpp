#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <bits/stdc++.h>

using namespace std;

void forkCPP(int N)
{

    if ((N % 3 == 0) && (N % 5 == 0))
    {
        cout << "Fork CPP";
    }
    else if (N % 3 == 0)
    {
        cout << "Fork";
    }
    else if (N % 5 == 0)
    {
        cout << "CPP";
    }

    cout << endl;
}

int main()

{

    // 5 raised to the power 2 is 25. 25 XOR 3 is 26 and remainder when 25 is divided by 3 is 1

    int A = 5;
    int B = 2;
    int C = 3;

    int p = pow(A, B);

    int p2 = p ^ C;

    int p3 = p % 3;

    cout << p << " " << p2 << " " << p3;

    exit(0);

    // 1, (2, 3), (4, 5), (6, 7), (8, 9), (10,11) ,12

    int N = 12;
    int X = 3;
    int count = 0;
    int left = 0, right = 0;
    int flag = 1;

    for (int i = 1; i < N; i++)
    {
        if (i % 2 == 0)
        {
            // cout << "i :" << i << " =>" << i % 2 << endl;
            count++;
        }
    }

    if (N % 2 == 0)
    {
    }

    cout << count;

    exit(0);

    multiset<int> mst;

    mst.insert(20);

    mst.insert(30);

    mst.insert(10);

    mst.insert(50);

    mst.insert(10);

    mst.erase(mst.begin(), mst.find(10));

    multiset<int>::iterator itr;

    for (itr = mst.begin(); itr != mst.end(); itr++)

        cout << *itr << " ";

    cout << endl;

    cout << mst.count(10);

    return 0;
}