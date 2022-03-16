#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func(string V, string X)
{
    float a, b;
    a = stof(V);
    b = stof(X);

    if (a > b)
    {
        cout << "No";
    }

    else
    {
        cout << "Yes";
    }
}

int main()
{

    string V, X;
    cin >> V >> X;
    func(V, X);

    return 0;
}