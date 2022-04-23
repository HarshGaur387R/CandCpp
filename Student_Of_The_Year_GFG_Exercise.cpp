// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

/*Function to sort students with respect to their marks
 * v : vector input with student name and their marks
 * N : size of vector
 * Your need to implement comparator to sort on the basis of marks.
 */

int gob = 0;
vector<pair<string, int>> sortMarks(vector<pair<string, int>> v, int N)
{
    sort(v.begin(), v.end(), [](pair<string, int> p1, pair<string, int> p2)
        {
             if(p1.second == p2.second) return (p1.first < p2.first);
             else return (p1.second > p2.second); 
        }
    );

    return v;
}

// { Driver Code Starts.

// Driver code
int main()
{

    int testcase = 1;
    // cin >> testcase;

    while (testcase--)
    {
        int N;
        cin >> N;

        // Declaring vector
        vector<pair<string, int>> v;

        // Taking input to vector
        for (int i = 0; i < N; i++)
        {
            string s;
            cin >> s;
            int k;
            cin >> k;
            v.push_back(make_pair(s, k));
        }

        // Calling function
        v = sortMarks(v, N);

        // Printing student name with their marks
        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }
        // cout << gob;
    }

    return 0;
} // } Driver Code Ends