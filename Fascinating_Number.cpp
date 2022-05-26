#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    bool fascinating(int n)
    {

        string s = to_string(n) + to_string(n * 2) + to_string(n * 3);
        vector<int> vecHash(10, 0);

        for (char c : s)
        {
            vecHash[c - '0']++;
        }

        for (int i = 1; i <= 9; i++)
        {
            if (vecHash[i] != 1)
            {
                return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.

int main()
{
    int t = 1;

    while (t--)
    {
        int n = 183; // 183 366 549

        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans)
        {
            cout << "Fascinating\n";
        }
        else
        {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
} // } Driver Code Ends