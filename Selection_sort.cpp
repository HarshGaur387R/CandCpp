#include <iostream>
using namespace std;

class sort
{
private:
public:
    void selectionSort(int arr[], int n);
    sort(/* args */);
    ~sort();
};

void sort::selectionSort(int arr[], int n)
{

    int minIndex = 0;
    int minValue = 0;
    int flow = 0;
    bool isSwap = false;

    for (int i = 1 + flow; i < n-1; i++)
    {
        minValue = arr[flow];
        minIndex = flow;

        for (int j = flow; j < n; j++)
        {
            if (arr[j] < minValue)
            {
                minValue = arr[j];
                minIndex = j;
                isSwap = true;
            }
        }
        if (isSwap)
        {
            arr[minIndex] = arr[flow];
            arr[flow] = minValue;
        }
        flow++;
    }
}

sort::sort(/* args */)
{
}

sort::~sort()
{
}

int main()
{
    int arr[] = {1, -2, -1, 2, 0};

    sort ob;
    ob.selectionSort(arr, sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}