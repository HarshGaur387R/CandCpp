#include <iostream>
using namespace std;

void func()
{
    int N = 0, total = 0, bigNum = 0;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < N; j++)
    {
        total += arr[j];
        if (arr[j] > bigNum)
        {
            bigNum = arr[j];
        }
    }

    cout << total % bigNum;
}

int main()
{

    func();
    return 0;
}