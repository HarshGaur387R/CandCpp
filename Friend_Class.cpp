#include <iostream>
using namespace std;

class A
{

    friend class B; //Now Class B can accsess the private data of class A.
    int A1_data;

public:
    A(int a)
    {
        A1_data = a;
    }
};

class B
{

    int B1_data;

public:
    B(int b)
    {
        B1_data = b;
    }

    void ShowA(A x)
    {
        cout << "The Value of A1_data is :" << x.A1_data << endl;
    }
};

int main()
{

    A obj(3);
    B obj2(5);
    obj2.ShowA(obj); //Passing class A object ,which object data you want.
    return 0;
}