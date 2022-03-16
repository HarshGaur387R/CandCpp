#include <iostream>
using namespace std;

int main()
{
    
   int num=0,i=0,l=0;
   int arr[100];
   int arr2[100];

   cin>>num;

   for (i = 0; num > 0; i++)  //Binary Coverter
   {
       arr[i] = num%2;
       num = num/2;
   }
   


    for (int j = i-1; j >= 0; j--)  //Reversing The Array Of Binary Numbers
    { 
        arr2[l] = arr[j];
        cout<<arr2[l]<<" ";
        l++;  
    }
    
    

    
   return 0;
}

// 1*(2^2) + 1*(2^1) + 1*(2^0) = Binary to decimal