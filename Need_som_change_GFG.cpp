#include <iostream>
using namespace std;

void swapElements(int arr[], int sizeof_array)
{
    int i=0;
    while(i+2<sizeof_array)
    {
        int temp = arr[i];
        arr[i] = arr[i + 2];
        arr[i + 2] = temp;
        i++;
    }
}

int main()
{

    int arr[] = {1,2,3,4,5};
    
    swapElements(arr,5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// 1 2 3 4 5
// 3 2 1 4 5
// 3 4 1 2 5
// 3 4 5 2 1