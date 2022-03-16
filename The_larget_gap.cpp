#include <iostream>
#include <cmath>
using namespace std;

void func()
{

    int temp = 1;
    int N;
    cin >> N;
    int arr[N];
    int gap = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        temp = i + 1;
        for (int j = temp; j < N; j++)
        {
            if (abs(arr[i] - arr[j]) > gap)
            {
                gap = abs(arr[i] - arr[j]);
            }

            temp++;
        }
        temp = 1;
    }

    cout << gap;
}

int main()
{

    func();
    return 0;
}
