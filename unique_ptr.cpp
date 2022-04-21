#include <iostream>
#include <memory>
using namespace std;

class rectangle
{

private:
    int length = 0, breadth = 0;

public:
    rectangle(int l, int b) : length(l), breadth(b){};

    int area() { return length * breadth; }
};

int main()
{
    unique_ptr<rectangle> P1(new rectangle(5, 10));

    unique_ptr<rectangle> P2;

    cout<<P1->area()<<endl;

    P2 = move(P1);  //P1 becomes NULL pointer. And align the data of P1 into P2.
    
    cout << P2->area() << endl;

    return 0;
}