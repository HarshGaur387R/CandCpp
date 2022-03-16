#include <iostream>
using namespace std;

//NOTE : When we create object so constructer automatically invoked.
//       constructer invoked each time for each object.

class complex
{
private:
    int a, b;

public:
    void printdata(void)
    {
        cout << a << " + " << b << "!" << endl;
    }

    complex(void); //constructer decleration
};

complex ::complex(void) //constructer defination
{ 
    a = 2;
    b = 3;
    cout << "constructer invoked" << endl;
}

int main()
{

    complex o1, o2, o3; //constructer invoked 3 times because we make 3 objects.

    o1.printdata();
    o2.printdata();

    return 0;
}