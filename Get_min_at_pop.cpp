// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[], int n);

void _getMinAtPop(stack<int> s);

// } Driver Code Ends
// User function Template for C++

// Function to push all the elements into the stack.

int Garr[100000000];
int glob;

int getmax(int arr[], int count)
{

    int max = INT_MIN;

    for (int i = 0; i < count; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

void countSort(int arr[], int n, stack<int> st)
{
    stack<int> st2;

    int max = getmax(arr, n);

    int *countArr = new int[max + 1];

    memset(countArr, 0, n);

    for (int i = 0; i < n; i++)
    {
        countArr[arr[i]]++;
    }

    int j = 0;
    int i = 0;

    while (i <= max)
    {
        if (countArr[i] > 0)
        {
            arr[j] = i;
            st.push(i);
            countArr[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    delete[] countArr;
}

stack<int> _push(int arr[], int n)
{
    glob = n; // Initializing global variable with n
    int i = 0;
    stack<int> s;

    while (i < n)
    {
        Garr[i] = arr[i]; // Inititalizing local "arr" value to global "Garr"
        s.push(arr[i]);
        i++;
    }
    return s; // O(n)
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s)
{
    countSort(Garr, glob, s);
}

// { Driver Code Starts.
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n = 5;
        int arr[] = {3, 500, 2, 7, 8};

        stack<int> mys = _push(arr, n);
        _getMinAtPop(mys);

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends