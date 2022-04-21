// CPP Program to illustrate default
// constructor with
// 'explicit' keyword
#include <iostream>
using namespace std;

/*
As discussed in this article, in C++, if a class has a constructor which can be called with a single argument, then this constructor becomes conversion constructor because such a constructor allows conversion of the single argument to the class being constructed.

We can avoid such implicit conversions as these may lead to unexpected results. We can make the constructor explicit with the help of an explicit keyword. For example, if we try the following program that uses explicit keywords with a constructor, we get a compilation error.

*/

class Complex
{
private:
    double real;
    double imag;

public:
    // Default constructor

    // explicit : use explicit keyord before Complex while defining constructor.
    // so this constructor isn't able to make whole object for a single argument.

    explicit Complex(double r = 0.0, double i = 0.0)
        : real(r), imag(i)
    {
    }

    // A method to compare two Complex numbers
    bool operator==(Complex rhs)
    {
        return (real == rhs.real && imag == rhs.imag) ? true : false;
    }
};

// Driver Code
int main()
{
    // a Complex object
    Complex com1(3.0, 0.0);

    if (com1 == (Complex)3.0) // And dont forget to typecast the argument into class name.
        cout << "Same";
    else
        cout << "Not Same";
    return 0;
}