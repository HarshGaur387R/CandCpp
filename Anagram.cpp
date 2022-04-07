// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {
        unsigned int total = 0;
        int arr[257] = {0};

        if (a.length() != b.length())
        {
            return false;
        }
        if (a == b)
        {
            return true;
        }

        for (int i = 0; i < a.length(); i++)
        {
            int char_to_int = 0;
            char_to_int = a.at(i);
            arr[char_to_int]++;

            char_to_int = b.at(i);
            arr[char_to_int]--;
        }

        for (int i = 0; i <= 257; i++)
        {

            if (arr[i] > 0 || arr[i] < 0)
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

    int t;

    cin >> t;

    while (t--)
    {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.isAnagram(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
// } Driver Code Ends