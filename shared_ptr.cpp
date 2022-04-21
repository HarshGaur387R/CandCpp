#include <iostream>
#include <memory>
using namespace std;

class rectangle
{

private:
    int length = 0;
    int breadth = 0;

public:
    rectangle(int l, int b) : length(l), breadth(b){};

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    shared_ptr<rectangle> P1(new rectangle(5, 10));
    shared_ptr<rectangle> P2;
    shared_ptr<rectangle> P3;
    P2 = P1;
    P3 = P1;
    cout << P1->area() << endl;
    cout << P2->area() << endl;

    cout << P1.use_count() << endl;

    return 0;
}