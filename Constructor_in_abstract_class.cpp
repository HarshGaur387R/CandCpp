#include <iostream>
using namespace std;

class base
{
protected:
    int x;

public:
    virtual void show() = 0;
    base(int i)
    {
        x = i;
        cout << "Base constructor is called" << endl;
    }
};

class drived : public base
{
    int y;

public:
    void show()
    {
        cout << "x is : " << x << ", y is : " << y << endl;
    }
    drived(int i, int j) : base(i)
    {
        y = j;
        cout << "Drived Constructor is called" << endl;
    }
};

int main()
{

    drived D(5, 6);

    D.show();

    return 0;
}