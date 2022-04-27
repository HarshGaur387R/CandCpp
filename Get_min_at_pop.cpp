// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[], int n);

void _getMinAtPop(stack<int> s);

// } Driver Code Ends
// User function Template for C++

// Function to push all the elements into the stack.

stack<int> _push(int arr[], int n)
{
    stack<int> s;
    int i = 0;

    while (i < n)
    {
        s.push(arr[i]);
        i++;
    }

    return s;
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s)
{
    vector<int> v;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        v.push_back(s.top());
        s.pop();
    }

    for (int i = 0; i < n; i++)
    {
        cout << *min_element(v.begin(), v.end());
        v.erase(v.begin());
    }
}

// { Driver Code Starts.
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n = 5;
        int arr[] = {1,2,0,4,5};

        stack<int> mys = _push(arr, n);
        _getMinAtPop(mys);

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends