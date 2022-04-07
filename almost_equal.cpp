// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

/*Function to count number of characters
 * to make s1 and s2 equal
 * s1 : first string
 * s2 : second string
 */

class Solution
{
public:
    int countChars(string s1, string s2)
    {

        int arr[257] = {0};
        int count = 0;

        
        for (int i = 0; i < s1.length(); i++)
        {
            int char_to_int = s1.at(i);
            arr[char_to_int]++;
        }

        for (int i = 0; i < s2.length(); i++)
        {
            int char_to_int = s2.at(i);
            arr[char_to_int]--;
        }

        for (int j = 0; j <= 257; j++)
        {
            count += abs(arr[j]);
        }

        return count;
    }
};

// { Driver Code Starts.
int main()
{

    int testcase;

    cin >> testcase;

    while (testcase--)
    {

        // taking string input
        string s1, s2;
        cin >> s1 >> s2;
        Solution obj;
        cout << obj.countChars(s1, s2) << endl;
    }

    return 0;
} // } Driver Code Ends

/*

geeksforgeeksPPPP
geeks


*/