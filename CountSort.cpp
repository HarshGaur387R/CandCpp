#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

int getmax(int arr[], int count)
{

    int max = INT_MIN;

    for (int i = 0; i < count; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

void print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countSort(int arr[], int n)
{

    int max = getmax(arr, n);

    int *countArr = new int[max + 1];

    memset(countArr, 0, n);

    for (int i = 0; i < n; i++)
    {
        countArr[arr[i]]++;
    }

    int j = 0;
    int i = 0;

    while (i <= max)
    {
        if (countArr[i] > 0)
        {
            arr[j] = i;
            countArr[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }
}

// 0  1  2  3  4      Arr index

// 3  4  5  5  1      Arr

// 0  0  0  0  0  0   countArr before

// 0  1  0  1  1  2   countArr after

// 1  3  4  5  5      Arr after scan

int main()
{
    int n = 5;
    int arr[] = {5, 4, 300, 2, 2};

    countSort(arr, n);

    print(arr, n);

    return 0;
}