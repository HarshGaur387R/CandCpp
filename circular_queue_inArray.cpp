#include <iostream>
using namespace std;

class cqueue
{

private:
    int *arr;
    int frontI = 0;
    int backI = 0;
    int size = 0;
    int tempsize = 0;

public:
    cqueue(int si);
    void enqeue(int data);
    int deqeue();
    void print();
    bool isfull();
    bool isempty();
    int firstVal();
    int lastVal();
    int peek(int pos);
    ~cqueue();
};

int cqueue::peek(int pos)
{
    if (isempty())
    {
        cout << "IN_LAST_VAL :: Queue is empty!\n";
        exit(0);
    }
    if (pos + frontI > backI)
    {

        cout << "IN PEEK :: given position is greator than last poition of the array" << endl;
        exit(0);
    }
    else if (pos < 0)
    {
        cout << "IN PEEK :: given position is smaller than first poition of the array\n";
        exit(0);
    }
    else if (pos == 0)
    {
        cout << "IN PEEK :: index starts at 1 and give 0 LOL!" << endl;
        exit(0);
    }
    else
    {
        return arr[frontI + pos];
    }
}

int cqueue ::lastVal()
{
    if (isempty())
    {
        cout << "IN_LAST_VAL :: Queue is empty!\n";
        exit(0);
    }
    else
    {
        return arr[backI];
    }
}

int cqueue ::firstVal()
{
    if (isempty())
    {
        cout << "IN_FIRST_VAL :: Queue is empty!\n";
        exit(0);
    }
    else
    {
        return arr[frontI + 1];
    }
}

cqueue ::~cqueue()
{
    delete[] arr;
}

bool cqueue::isfull()
{
    if ((backI + 1) % tempsize == frontI)
    {
        return true;
    }
    else
        return false;
}

bool cqueue::isempty()
{
    if (backI == frontI)
        return true;
    else
        return false;
}

cqueue::cqueue(int si)
{
    size = si;
    tempsize = si;
    arr = new int[si];
}

void cqueue::enqeue(int data)
{
    if (isfull())
    {
        cout << "queue is full!\n";
        exit(0);
    }
    else
    {
        backI = (backI + 1) % tempsize;
        arr[backI] = data;
    }
}

int cqueue::deqeue()
{
    if (isempty())
    {
        cout << "qeue is empty!\n";
        exit(0);
    }
    else
    {
        frontI = (frontI + 1) % tempsize;
        size--;
        return arr[frontI];
    }
}

void cqueue::print()
{

    if (isempty())
    {
        cout << "Queue is empty!\n";
        exit(0);
    }
    else
    {
        int i = frontI + 1;
        while (i <= backI)
        {
            cout << arr[i] << " ";
            i++;
        }
    }
}

int main()
{

    cqueue ob(6);
    ob.enqeue(430);
    ob.enqeue(3);
    ob.enqeue(40);
    ob.enqeue(50);
    ob.enqeue(39);

    cout << ob.deqeue() << endl;
    cout << ob.deqeue() << endl;
    cout << ob.deqeue() << endl;
    cout << ob.deqeue() << endl;
    cout << ob.deqeue() << endl;

    ob.enqeue(430);
    ob.enqeue(3);
    ob.enqeue(40);
    ob.enqeue(50);
    ob.enqeue(39);

    cout << ob.deqeue() << endl;
    cout << ob.deqeue() << endl;
    cout << ob.deqeue() << endl;
    cout << ob.deqeue() << endl;
    cout << ob.deqeue() << endl;

    return 0;
}
