#include <iostream>
#include <unordered_map>
#include <cctype>

using namespace std;

int main()
{

    string str = "geeks for geeks geeks quiz practice qa for-";
    string str2[100];
    string temp;
    unordered_map<int, string> um;
    unordered_map<string, int> um2;

    int key = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (!isalpha(str.at(i)))
        {
            um[key] = temp;
            str2[key] = temp;
            key++;
            temp = "";
        }
        else
        {
            temp += str.at(i);
        }
    }

    for (auto x : um)
    {

        if (um2.find(x.second) == um2.end())
        {
            um2[x.second] = x.first;
        }
    }

    int flag = 0;

    for (auto x : um2)
    {

        for (int i = 0; i < key; i++)
        {
            if (x.first == str2[i])
            {
                flag++;
            }
        }

        cout << "(" << x.first << ", " << flag << ")" << endl;
        flag = 0;
    }
    return 0;
}