#include <iostream>
#include <unordered_set>
using namespace std;

void findDuplicate(int arr[], int n)
{
    unordered_set<int> arr1;
    unordered_set<int> arr2;

    for (int i = 0; i < n; i++)
    {
        if (arr1.find(arr[i]) == arr1.end())
        {
            arr1.insert(arr[i]);
        }
        else
        {
            arr2.insert(arr[i]);
        }
    }

    for (auto i = arr2.begin(); i != arr2.end(); i++)
    {
        cout << *i<< " ";
    }
}

int main()
{
    int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
    int n = sizeof(arr) / sizeof(int);
    findDuplicate(arr, n);

    return 0;
}