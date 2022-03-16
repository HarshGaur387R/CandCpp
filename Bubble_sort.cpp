#include <iostream>
using namespace std;

// Time complexety : O(n^2).
// We made it adaptive algo.
// Also a stable algo.

class sort
{
public:
    void bubbleSort(int *headref, int size);
};

void sort::bubbleSort(int *headref, int size)
{
    int isSorted = 0;
    for (int i = 0; i < size; i++)
    {
        int temp = 0;

        for (int j = i; j < size; j++)
        {
            if (headref[j] < headref[i])
            {
                temp = headref[j];
                headref[j] = headref[i];
                headref[i] = temp;
                isSorted = 1;
            }
        }

        if (isSorted == 0)
        {
            return;
        }
    }
}

int main()
{
    sort ob;

    int arr[] = {3, 2, 1, 3, 0, 118};

    int size = sizeof(arr) / sizeof(arr[0]);
    ob.bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}