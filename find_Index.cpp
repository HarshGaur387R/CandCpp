// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> findIndex(int a[], int n, int key)
    {
        vector<int> ob;
        int j = n - 1;

        int leftIsComplete = 0;
        int rightIsComplete = 0;

        for (int i = 0; i < n; i++)
        {

            if (leftIsComplete == 0)
            {
                if (a[i] == key)
                {
                    if (ob.size() > 0)
                    {
                        int temp = ob.back();
                        ob.pop_back();
                        ob.push_back(i);
                        ob.push_back(temp);
                        leftIsComplete = 1;
                    }
                    if (ob.size() == 0)
                    {
                        ob.push_back(i);
                        leftIsComplete = 1;
                    }
                }
            }
            if (rightIsComplete == 0)
            {
                if (a[j] == key)
                {
                    ob.push_back(j);
                    rightIsComplete = 1;
                }
            }
            if (j > 0)
            {
                j--;
            }
        }
        if (ob.size() == 0)
        {
            ob.push_back(-1);
            ob.push_back(-1);
        }
        return ob;
    }
};

// { Driver Code Starts.
int main()
{
    int t = 1;

    while (t--)
    {
        int n = 6;
        vector<int> res;

        int arr[] = {1, 2, 3, 4, 5, 5};

        int key = 5;

        Solution ob;
        res = ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends
