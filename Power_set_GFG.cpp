// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // vector<string>
    void AllPossibleStrings(string s)
    {
        int set_size = s.length();
        unsigned int pow_set_size = pow(2, set_size);
        int counter, j;

        /*Run from counter 000..0 to 111..1*/
        for (counter = 0; counter < pow_set_size; counter++)
        {
            for (j = 0; j < set_size; j++)
            {
                /* Check if jth bit in the counter is set
                    If set then print jth element from set */
                if (counter & (1 << j))
                    cout << s[j];
            }
            cout << endl;
        }
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        Solution ob;
        // vector<string> res =
        ob.AllPossibleStrings(s);
        /*for (auto i : res)
            cout << i << " ";
        cout << "\n";*/
    }
    return 0;
} // } Driver Code Ends