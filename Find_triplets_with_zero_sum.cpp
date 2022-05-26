#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
 *  arr[]: input array
 *  n: size of array
 */
class Solution
{
public:
    // Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    {
        sort(arr, arr + n);

        for (int i = 0; i < n - 2; i++) // i = 1
        {

            int start = i + 1; // index = 1 , arr[1] = -5
            int end = n - 1;   // index = 7 , arr[7] = 5

            while (start < end)
            {
                if (arr[i] + arr[start] + arr[end] == 0)
                {
                    return true;
                }

                else if (arr[i] + arr[start] + arr[end] < 0)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
        return false;
    }
};

// { -8. -5, -3 , 0 , 1, 2, 3, 5, 6}
/*

*/

// { Driver Code Starts.
int main()
{
    int t = 1;

    while (t--)
    {
        int n = 9;

        int arr[] = {-8, -5, -3, 0, 1, 2, 3, 5, 6};

        Solution obj;
        if (obj.findTriplets(arr, n))
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
} // } Driver Code Ends