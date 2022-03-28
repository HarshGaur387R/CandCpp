#include <iostream>
using namespace std;

void merge(int arr[], int l, int h, int m)
{

    int arr2[h + 1];
    int i, j, k;
    i = j = k = 0;

    while (i < m && j < h)
    {
        if (arr[i] > arr[j])
        {
            arr2[k] = arr[i];
            i++;
        }
        else
        {
            arr2[k] = arr[j];
            j++;
        }
    }
    while (i < m)
    {
        arr2[k] = arr[i];
        k++;
        i++;
    }
    while (j < h)
    {
        arr2[k] = arr[j];
        k++;
        j++;
    }

}

void mergesort(int arr[], int low, int high)
{
   

    if (low < high)
    {

        int mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }

}

int main()
{

    int arr[] = {3,2,1,5};

    mergesort(arr,0,4-1);

    return 0;
}

/*                        |
                     l  m |    h
                     3  2 | 1  5

                    m /        \   m
                 l  h           l  h
                 3  2           1  5
                /    \         /    \
              l       l       l      l
              3       2      1        5

*/