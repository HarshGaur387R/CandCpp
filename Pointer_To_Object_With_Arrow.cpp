#include <iostream>
using namespace std;

class complex
{

public:
    int real, imagienary;

    void setData(int a, int b)
    {
        real = a;
        imagienary = b;
    }

    void getData()
    {
        cout << "The real number is : " << real << endl;
        cout << "The imagienary number is : " << imagienary << endl;
    }
};

int main()
{
    complex ob;
    complex *obp = &ob;
        

    obp->setData(3,4);
    obp->getData();


    complex *obp2 = new complex;

    (*obp2).setData(5,6);
    (*obp2).getData();

    delete obp2;

    complex *obAp = new complex[2];

    obAp[0].setData(7,8);
    obAp[0].getData();
    (obp2+1)->setData(33,45);
    (obAp+1)->getData();

    delete []obAp;

    return 0;
}