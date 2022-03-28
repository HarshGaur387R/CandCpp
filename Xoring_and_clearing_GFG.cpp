#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    void printArr(int arr[],int n)
    {
        cout<<arr[0];
        for (int i = 1; i < n; i++)
        {
            cout<<" "<<arr[i];
        }
        
        
        cout<<endl;
    }
    
    void setToZero(int arr[],int n)
    {
       memset(arr, 0, n*sizeof(arr[0]));
    }
    
    void xor1ToN(int arr[], int n)
    {
       for (int i = 0; i < n; i++)
       {
           arr[i] = arr[i] ^ i;
       }
       
    }
};


int main() {
	
	    int n = 10;

        int arr[] = { 1, 2, 3, 4, 5, 6 ,7, 8 ,9 ,10};
        
	    Solution obj;
	    obj.xor1ToN(arr,n);
	    obj.printArr(arr,n);
	    obj.setToZero(arr,n);
	    obj.printArr(arr,n);

	return 0;
}
