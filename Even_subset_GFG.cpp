// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

/*Function to count subset with even sum
 * arr : array input
 * N : size of array
 */
class Solution
{
public:
	int countSumSubsets(int arr[], int N)
	{

		unsigned int pow_set_size = pow(2, N);
		int counter, j;
		int sum = 0;
		int count = 0;
		for (counter = 0; counter < pow_set_size; counter++)
		{
			for (j = 0; j < N; j++)
			{

				if (counter & (1 << j))
					sum += arr[j];
			}
			if (sum % 2 == 0 && sum != 0)
			{
				count++;
			}
			sum = 0;
		}

		return count;
	}
};

// { Driver Code Starts.

// Driver code to test columnWithMaxZeros function
int main()
{

	int testcase;

	cin >> testcase;

	while (testcase--)
	{
		int N;
		cin >> N;

		int arr[N];

		// Taking elements input into the matrix
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		Solution obj;
		cout << obj.countSumSubsets(arr, N) << endl;
		// obj.countSumSubsets(arr, N);
	}

	return 0;
} // } Driver Code Ends

/*

	//	Fastest algorithm

int countSumSubsets(int arr[], int N){

		long long cnt1=0,cnt0=0;

	   for(int i=0;i<N;i++){
		   if(arr[i]&1)cnt1++;
		   else cnt0++;
	   }

	   long long h=(1<<cnt0)-1;
	   int u=h;
	   long long j=(1<<cnt1)-1;
	   j=(j/2);

	   h+=j;
	   h+=(j*u);
	   return h;
	}



*/