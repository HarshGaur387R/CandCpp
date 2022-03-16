#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

void printing_frequency(const string &str)
{

    unordered_map<string, int> um;
    

    stringstream st(str);
    string word;

    while (st >> word)
    {
        um[word]++;
    }

    for (auto x : um)
    {
        cout << "(" << x.first << ", " << x.second << ")" << endl;
    }
}

int main()
{
    string str = "geeks for geeks geeks quiz practice qa for";

    printing_frequency(str);

    return 0;
}