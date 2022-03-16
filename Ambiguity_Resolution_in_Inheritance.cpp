#include <iostream>
using namespace std;


//Most of the People face this ambiguity problem.
class base1
{

public:
    void say_Hi()
    {
        cout << "Hi\n";
    }
};

class base2
{

public:
    void say_Hi()
    {
        cout << "Oh!! HI\n";
    }
};

class drived : public base1, public base2
{

public:
    void say_Hi() //Redefine
    {
      base2 ::say_Hi(); //Telling compiler to which base class's say hi function you want.
      cout<<"HE HE BOI"<<endl; //And you can also add some other things in your redefiend Inheritated member function.
    }
};


int main()
{

    drived ob;

    ob.say_Hi();

    return 0;
}