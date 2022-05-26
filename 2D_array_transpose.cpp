// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define M 101

vector<vector<int>> transpose(int a[][M], int n);

int main()
{
    int t = 1;
    // cin>>t;
    int a[M][M] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    while (t--)
    {
        int n = 3;
        // cin>>n;

        vector<vector<int>> b;

        b = transpose(a, n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << b[i][j] << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends

/*
        i i i
      j 1 2 3       1 4 7
      j 4 5 6 ----> 2 5 8
      j 7 8 9       3 6 9

*/

vector<vector<int>> transpose(int a[][M], int n)
{
    vector<vector<int>> ob(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ob[j][i] = a[i][j];
        }
    }
    return ob;
}
