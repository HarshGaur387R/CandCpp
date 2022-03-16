#include <iostream>
#include <cmath>
using namespace std;

void func(int num)
{

    int arr[3];
    int temp;
    temp = num;
    int armstrong = 0;

    for (int i = 0; temp != 0; i++)
    {
        arr[2 - i] = temp % 10;
        temp = temp / 10;
        arr[2 - i] = pow(arr[2 - i], 3);
        armstrong += arr[2 - i];
    }

    if (num == armstrong)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}

int main()
{

    int num;
    cin >> num;

    func(num);

    return 0;
}