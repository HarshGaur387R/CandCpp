#include <bits/stdc++.h>
using namespace std;

void checkString(string s);

// } Driver Code Ends
// User function Template for C++

void checkString(string s)
{
    int v = 0;
    int c = 0;

    // Your code here

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == 'a' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u' || s.at(i) == 'e')
        {
            v++;
        }
        else if (s.at(i) != ' ')
        {
            c++;
        }
    }

    if (v > c)
        cout << "Yes";
    else if (c > v)
        cout << "No";
    else
        cout << "Same";

    cout << endl;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {

        string s;
        getline(cin, s);

        // function call
        checkString(s);
    }
    return 0;
}

// } Driver Code Ends