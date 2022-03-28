#include <iostream>
using namespace std;

class sort
{

public:
    void quicksort(int arr[], int low, int high);
    void print(int arr[], int n);
    int partition(int arr[], int low, int high);
};

int sort::partition(int arr[], int low, int high)
{
    int temp = 0;
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void sort::quicksort(int arr[], int low, int high)
{
    int pivot;

    if (low < high)
    {
        pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

void sort::print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    sort ob;
    int arr[] = {3, 2, 5, 6, 10, 9, 8};

    int n = 7;

    ob.print(arr, n);
    cout << endl;

    ob.quicksort(arr, 0, n);

    ob.print(arr, n);
    cout << endl;

    return 0;
}

// {3, 2, 5, 6, 10, 9, 8} ///////////

//     i               j
//  p  |               |
// {3, 2, 5, 6, 10, 9, 8}    // A1

//     j  i
//  p  |  |
// {3, 2, 5, 6, 10, 9, 8}    // A2

//     j  i
//  p  |  |
// {2, 3, 5, 6, 10, 9, 8}    // A3   return j=3

//        i            j
//     p  |            |
// {2, 3, 5, 6, 10, 9, 8}    // B1

//     j  i
//     p  |
// {2, 3, 5, 6, 10, 9, 8}    // B2   return j=3

//           i         j
//        p  |         |
// {2, 3, 5, 6, 10, 9, 8}    // C1

//        j  i
//        p  |
// {2, 3, 5, 6, 10, 9, 8}    // C2   return j=5

//               i     j
//           p   |     |
// {2, 3, 5, 6, 10, 9, 8}    // D1

//           j   i
//           p   |
// {2, 3, 5, 6, 10, 9, 8}    // D2   return j=6

//                  i  j
//               p  |  |
// {2, 3, 5, 6, 10, 9, 8}    // E1

//                     i
//                     j
//               p     |
// {2, 3, 5, 6, 10, 9, 8}    // E2

//                     i
//                     j
//              p      |
// {2, 3, 5, 6, 8, 9, 10}    // E3   return j=10
