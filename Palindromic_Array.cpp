#include <iostream>
using namespace std;

int palindrome(int num, int n)
{

    int num1 = num;
    int rem = 0;

    while (num != 0)
    {

        rem = rem * 10 + num % 10;
        num = num / 10;
       
    }
    if (rem == num1)
        return 1;
    else
        return 0;
}

int PalinArray(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += palindrome(a[i], n);
    }
    if (count == n)
        return 1;
    else
        return 0;
}

int main()
{
    int arr[]{666, 111, 151};

    cout << PalinArray(arr, 3);

    return 0;
}