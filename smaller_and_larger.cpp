// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    vector<int> getMoreAndLess(int arr[], int n, int x)
    {
        vector<int> ob(2);

        ob[0] = upper_bound(arr, arr + n, x) - arr;
        ob[1] = n - (lower_bound(arr, arr + n, x) - arr);
        return ob;
    }
};

// { Driver Code Starts.

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n = 8, x = 5;
        // cin >> n >> x;
        int arr[] = {1, 2, 4, 8, 10, 11, 12, 19};

        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends