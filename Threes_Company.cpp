#include <iostream>

using namespace std;

void func()
{
    int N;
    cin >> N;

    char *arr = new char[N];
    cin >> arr;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i];
        }
    }

    delete[] arr;
}

int main()
{
    func();
    return 0;
}