#include <iostream>
using namespace std;

class base
{

protected:
    int baseData1;
    int baseData2;

public:
    base(int a1, int b1)
    {
        baseData1 = a1;
        baseData2 = b1;
    }

    void Bdisplay()
    {
        cout << "The base data 1 is :" << baseData1 << endl;
        cout << "The base data 2 is :" << baseData2 << endl;
    }
};

class drived : public base
{

protected:
    int drivedData1;
    int drivedData2;

public:
    drived(int a1 = 0, int b1 = 0, int a2 = 0, int b2 = 0) : base(a1, b1)
    {
        drivedData1 = a2;
        drivedData2 = b2;
    }

    void DDisplay()
    {
        cout << "The drived data 1 is :" << drivedData1 << endl;
        cout << "The drived data 2 is :" << drivedData2 << endl;
    }
};

int main()
{

    drived *objp = new drived[2];

    for (int i = 0; i < 2; i++)
    {
        *(objp + i) = drived(i, i + 1, i + 5, i + 10);
    }

    for (int i = 0; i < 2; i++)
    {
        (objp + i)->DDisplay();
    }
    objp->Bdisplay();

    return 0;
}