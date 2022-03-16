#include <iostream>
using namespace std;

class queue
{
private:
    queue *frontI = NULL;
    queue *rearI = NULL;
    queue *next = NULL;
    int data = 0;
    int size = 0;

public:
    bool isEmpty();
    bool isFull();
    void enqueue(int d);
    int dequeue();

    queue(/* args */);
    ~queue();
};

int queue ::dequeue()
{

    if (isEmpty())
    {
        cout << "Error In Dequeue : Queue is empty" << endl;
        exit(0);
    }
    else
    {
        queue *p = frontI;
        int t = p->data;

        frontI = frontI->next;

        delete p;
        return t;
    }
}

bool queue::isFull()
{
    queue *n = new queue;
    if (n == NULL)
    {
        return true;
    }
    else
    {
        delete n;
        return false;
    }
}

bool queue::isEmpty()
{
    if (frontI == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void queue::enqueue(int d)
{
    if (isFull())
    {
        cout << "Queue if full!\n";
    }
    else
    {
        queue *n = new queue;
        n->data = d;
        n->next = NULL;

        if (frontI == NULL)
        {
            frontI = rearI = n;
        }
        else
        {
            rearI->next = n;
            rearI = rearI->next;
        }
    }
}

queue::queue(/* args */)
{
}

queue::~queue()
{
}

int main()
{

    queue ob;
    ob.enqueue(10);
    ob.enqueue(20);
    ob.enqueue(30);
    ob.enqueue(40);

    cout << ob.dequeue() << endl;
    cout << ob.dequeue() << endl;
    cout << ob.dequeue() << endl;
    cout << ob.dequeue() << endl;

    ob.enqueue(10);
    ob.enqueue(20);
    ob.enqueue(30);
    ob.enqueue(40);

    cout<<endl;
    cout << ob.dequeue() << endl;
    cout << ob.dequeue() << endl;
    cout << ob.dequeue() << endl;
    cout << ob.dequeue() << endl;

    return 0;
}