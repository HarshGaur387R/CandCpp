#include <iostream>
using namespace std;

class B;

class A
{

public:
    void showB(B x);
};

class B
{

    int a, b;
    friend void A ::showB(B);

public:
    B(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

void A ::showB(B x)
{
    cout << "The sum of a and b is : " << x.a + x.b << endl;
}

int main()
{
    B obj(3, 4);

    A obj2;
    obj2.showB(obj);

    return 0;
}