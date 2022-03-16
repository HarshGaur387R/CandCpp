#include <iostream>
using namespace std;

class base //Abstract Base class.
{
public:
    virtual void func() = 0; //Pure Virtual Function.
};

void base ::func() //Defination of pure virtual function.
{
    cout << "Hi from base!!!" << endl;
}

class drived : public base
{
public:
    void func() //Overdriving Abstract class pure virtual function otherwise drived class also become abstract class.
    {
        cout << "Hi from drived!!!" << endl;
    }
};

int main()
{

    base *oB;
    drived oD;

    oB = &oD;

    oB->base::func(); //writing here which class function u want to use. If u didn't write base here
                      //so it calls drived funtion.
    return 0;
}