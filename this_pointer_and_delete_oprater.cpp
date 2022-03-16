#include <iostream>
using namespace std;

class Test
{

protected:
    int x, y;

public:
    Test &func(int x)
    {
        this->x = x;
        return *this;
    }

    Test &func2(int y)  //(&) operator is necessary before the name of member function.
    {
        this->y = y;
        return *this; //returning current object pointer.
    }

    void print()
    {
        cout << "The value of x is :" << x << endl;
        cout << "The value of y is :" << y << endl;
        delete this; //delete this; delete the current obj pointer so now obj is usless.
    }
};

int main()
{

    Test obj;
    obj.func(5).func2(6); //func returning current obj so its like : obj.obj.func2(6);.
    obj.print();

    obj.print(); //Calling print() member function test after destroying current obj pointer(this).
                 //Its shows error because obj is usless.

    return 0;
}