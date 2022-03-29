#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int h)
{
    int s = h-l+1;
    int arr2[s];

    int i, j, k;
    i = l;
    j = m + 1;
    k = l;

    while (i <= m && j <= h)
    {
        if (arr[i] < arr[j])
        {
            arr2[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            arr2[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= m)
    {
        arr2[k] = arr[i];
        k++;
        i++;
    }
    while (j <= h)
    {
        arr2[k] = arr[j];
        k++;
        j++;
    }

    for (int p = l; p <= h; p++)
    {
        arr[p] = arr2[p];
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {

        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{

    int n = 4;
    int arr[] = {3, 2, 1, 1};

    mergeSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

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