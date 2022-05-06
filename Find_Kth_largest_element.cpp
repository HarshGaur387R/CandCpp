#include <iostream>
#include <queue>
using namespace std;

int KthsLargestNum(int *arr, int n, int k)
{

    int num = 0;
    priority_queue<int> ob(arr, arr + n);

    for (int i = 0; i < k; i++)
    {
        num = ob.top();
        ob.pop();
    }

    return num;
}

int kthSmallest(int arr[], int l, int r, int k)
{
    int min = 0;
    priority_queue<int> ob;

    for (int i = 0; i < k; i++)
    {
        ob.push(arr[i]);
    }

    for (int i = k; i < r; i++)
    {
        if (ob.top() > arr[i])
        {
            ob.pop();
            ob.push(arr[i]);
        }
    }

    return ob.top();
}

int main()
{

    int arr[]{7 ,10 ,4 ,20 ,15};

    cout << kthSmallest(arr, 0, 5, 4);

   /*


   5
   7 10 4 20 15
   4



   */
    return 0;
}

/*
    
        (10)
       /    \
    (7)     (4)
   /
(3)
*/