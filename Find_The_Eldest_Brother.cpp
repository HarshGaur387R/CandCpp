#include <iostream>
using namespace std;


void func(int arr[]){

int elder_brother;

for (int i = 0; i < 5; i++)
{
    if (elder_brother < arr[i])
    {
        elder_brother = arr[i];
    }
    
}
cout<<elder_brother;

}

int main()
{

int arr[100];

for (int i = 0; i < 5; i++)
{
    cin>>arr[i];
}

func(arr);


return 0;
}