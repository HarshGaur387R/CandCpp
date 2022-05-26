// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> findElements(int a[], int n)
    {
        vector<int> ob;
        sort(a,a+n);
        for(int i =0; i<n-2; i++){
            ob.push_back(a[i]);
        }
        
        return ob;
    }
};

// { Driver Code Starts.
//
int main()
{
    int t = 1;

    while (t--)
    {
        int n = 5;

        int a[] = {2, 8, 7, 1, 5};

        Solution ob;
        vector<int> res = ob.findElements(a, n);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
} // } Driver Code Ends