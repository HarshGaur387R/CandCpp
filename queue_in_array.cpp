#include <iostream>
using namespace std;

class queue
{

private:
    int *arr;
    int frontI = -1;
    int backI = -1;
    int size = 0;

public:
    queue(int si);
    void enqeue(int data);
    void deqeue();
    void print();
    bool isfull();
    bool isempty();
    int firstVal();
    int lastVal();
    int peek(int pos);
    ~queue();
};

int queue::peek(int pos)
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

int queue ::lastVal()
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

int queue ::firstVal()
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

queue ::~queue()
{
    delete[] arr;
}

bool queue::isfull()
{
    if (backI == size - 1)
    {
        return true;
    }
    else
        return false;
}

bool queue::isempty()
{
    if (backI == frontI)
        return true;
    else
        return false;
}

queue::queue(int si)
{
    size = si;
    arr = new int[si];
}

void queue::enqeue(int data)
{
    if (isfull())
    {
        cout << "queue is full!\n";
        exit(0);
    }
    else
    {
        backI++;
        arr[backI] = data;
    }
}

void queue::deqeue()
{
    if (isempty())
    {
        cout << "qeue is empty!\n";
        exit(0);
    }
    else
    {
        frontI++;
        arr[frontI] = 0;
        size--;
    }
}

void queue::print()
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

    queue ob(6);
    ob.enqeue(430);
    ob.enqeue(3);
    ob.enqeue(40);
    ob.enqeue(50);
    ob.enqeue(39);
    ob.enqeue(30);
   

    ob.print();

    // cout << endl;
    // cout << endl;

    // cout << ob.firstVal() << endl;
    // cout << ob.lastVal() << endl;

   

    return 0;
}
