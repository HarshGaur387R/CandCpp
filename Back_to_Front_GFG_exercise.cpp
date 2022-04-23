// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*Function to print vector in reverse order
* using iterator
* it1 : v.rbegin(), reverse iterator
* it2 : v.rend(), reverse iterator
*/
void reverseIterator(vector<int>::reverse_iterator it1, vector<int>::reverse_iterator it2){
    
    while (it1 != it2)
    {
        cout<<*it1<<" ";
        it1++;
    }
       
}

// { Driver Code Starts.

// Driver code
int main() {
	
	int testcase=1;
	//cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector
	    vector<int> v;
	    
	    // Taking input to vector
	    for(int i = 0;i<N;i++){
	        int k;
	        cin >> k;
	        v.push_back(k);
	    }
	    
	    // Calling function
	    reverseIterator(v.rbegin(), v.rend());
	    
	}
	
	return 0;
}  // } Driver Code Ends