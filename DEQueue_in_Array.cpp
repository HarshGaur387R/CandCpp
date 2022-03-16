#include <iostream>
using namespace std;

class DEQueue
{
private:
    int *arr;
    int frontI = -1;
    int rearI = -1;
    int size = 0;
    int tempsize = 0;

public:
    bool isEmpty();
    bool isFull();
    void enqueueRear(int data);
    int dequeFront();
    void enqueueFront(int data);
    int dequeRear();

    DEQueue(int si);
    ~DEQueue();
};

int DEQueue ::dequeRear()
{

    if (rearI == -1)
    {
        cout << "Error in dequeRear :: DEQueue is empty\n";
        exit(0);
    }
    else
    {
        int l = arr[rearI];
        rearI--;
        size--;
        return l;
    }
}

void DEQueue ::enqueueFront(int data)
{
    if (frontI == -1 && rearI == size - 1)
    {
        cout << "Error in enqueueFront :: DEQueue is full\n";
        exit(0);
    }
    else
    {
        arr[frontI] = data;
        frontI--;
        size++;
    }
}

bool DEQueue ::isEmpty()
{
    if (frontI == rearI)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool DEQueue ::isFull()
{
    if (rearI == tempsize - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DEQueue ::enqueueRear(int data)
{
    if (isFull())
    {
        cout << "Error in enqueueRear :: DEQueue is full!\n";
        exit(0);
    }
    else
    {
        rearI++;
        arr[rearI] = data;
        size++;
    }
}

int DEQueue::dequeFront()
{
    if (isEmpty())
    {
        cout << "Error in dequeFront :: DEQueue is empty!\n";
        exit(0);
    }
    else
    {
        frontI++;
        size--;
        return arr[frontI];
    }
}

DEQueue::DEQueue(int si)
{
    arr = new int[si];
    tempsize = si;
}

DEQueue::~DEQueue()
{
}

int main()
{

    /* DEQueue is follow FIFO (First in first out) only when you are inserting element from rear and deleting  from front.
    but if you are inserting from rear or deleting from rear too so forget about FIFO . Yes! you can do this operation in DEQueue this is what DEQueue is all about you can isert from anywhere and delete from anywhere But when you do this such custom operations so you are just breaking the rules of FIFO. */

    DEQueue ob(4);

    ob.enqueueRear(30);
    ob.enqueueRear(20);
    ob.enqueueRear(40);
    ob.enqueueRear(50);

    cout << ob.dequeRear() << endl;
    cout << ob.dequeRear() << endl;
    cout << ob.dequeRear() << endl;
    cout << ob.dequeRear() << endl;

    return 0;
}