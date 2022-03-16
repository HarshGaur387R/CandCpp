#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int arr[100];
    int temp,b=1;
    
    cin>>a;


    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
     
    for (int i = 0; i < a; i++){
    
        for (int j = b; j < a; j++)
        {
            if (arr[i] < arr[j])
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
        }
         b = b + 1;
    }


    for (int i = 0; i <a ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

return 0;
}