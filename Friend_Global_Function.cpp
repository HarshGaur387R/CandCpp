#include <iostream>
using namespace std;

class A
{
    friend void Sum_Of_Private_Data(A); //Now S.O.P.D function can accsess private data of class A. 
    friend int main(); //You can also use main as a friend function

    int a, b;

public:
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

void Sum_Of_Private_Data(A x) 
{

    cout << "The sum of a and b is :" << x.a + x.b << endl;
}

int main()
{
    A obj(2, 3);
    Sum_Of_Private_Data(obj); //passing obj object to get its data;
    obj = A(10,20);
    cout<<"The sum of a and b is :"<<obj.a+obj.b<<endl;
    return 0;
}