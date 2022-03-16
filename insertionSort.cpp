#include <iostream>
using namespace std;

// 1) Time complexity : O(n^2)
// 2) Stablity : yes
// 3) Adaptive : Yes

class sort
{
public:
    void insertionSort(int arr[], int size);
};

void sort ::insertionSort(int arr[], int size)
{

    int key = 0;
    int j;

    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{

    int arr[] = {110, 10, 12, 14, 13, 15};
    sort ob;
    ob.insertionSort(arr, sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

/*

void sort ::insertionSort(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {

            for (int j = i; 0 < j; j--)
            {
                if (arr[j] < arr[j - 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }
    }
}

*/