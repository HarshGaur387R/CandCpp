// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    bool IsPerfect(int a[], int n)
    {
        bool ans = false;
        int j = n - 1;

        if(n == 1){
            return true;
        }

        for (int i = 0; i < floor(n / 2); i++)
        {
            if (a[i] == a[j])
            {
                // cout << a[i] << " " << a[j] << " ,";
                ans = true;
            }
            else if (a[i] != a[j])
            {
                // cout << a[i] << " " << a[j] << " ,";
                return false;
            }
            j--;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n = 1;
        // cin>>n;
        int a[] = {3};

        Solution ob;
        ob.IsPerfect(a, n);
        if (ob.IsPerfect(a, n))
            cout << "PERFECT\n";
        else
            cout << "NOT PERFECT\n";
    }

} // } Driver Code Ends