#include <iostream>
using namespace std;

void func()
{

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int S = 0;
        int arr[100];
        int temp = 1;
        int extra = 0;
        cin >> S;

        for (int j = 0; j < S; j++)
        {
            cin >> arr[j];
        }

        for (int i = 0; i < S; i++)
        {
            temp = 1+i;
            for (int j = temp; j < S; j++)
            {
                if (arr[i] < arr[j])
                {
                    extra = arr[i];
                    arr[i] = arr[j];
                    arr[j] = extra;
                }
                
            }
            temp=1;
            cout<<arr[i];
            extra = 0;
        }
            cout<<endl;
    }
}

int main()
{
    func();
    return 0;
}
