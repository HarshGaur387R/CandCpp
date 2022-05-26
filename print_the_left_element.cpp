// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int leftElement(int a[], int n)
    {
        int leftElement = 0;
        int j = n;
        sort(a, a + n);
        return a[j/2];
    }
};

// { Driver Code Starts.
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n = 10;

        int a[] = {1, 1, 2, 2, 3, 4, 5, 5, 6, 7};

        int i = 0;

        Solution ob;
        cout << ob.leftElement(a, n) << endl;
    }
}
// } Driver Code Ends