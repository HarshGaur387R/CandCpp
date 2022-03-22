#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;

int special_count(int arr[], int n, int mk)
{
    int cot = 0;
    int result = 0;
    map<int, int> ob;
    map<int, int>::iterator it;

    for (int i = 0; i < n; i++)
    {
        ob[arr[i]]++;
    }

    for (auto &&i : ob)
    {
        if (i.second == mk)
        {
            result++;
        }
    }
    return result;
}

int main()
{
    int mk;
    int arr[] = {1, 2, 2, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    mk = (n / 2);

    cout << special_count(arr, n, mk);

    return 0;
}