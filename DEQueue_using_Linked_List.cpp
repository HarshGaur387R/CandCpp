#include <iostream>
using namespace std;

class DEQueue
{
private:
    int data = 0;
    DEQueue *next = NULL;
    DEQueue *previous = NULL;
    DEQueue *frontP = NULL;
    DEQueue *rearP = NULL;

public:
    bool isFull();
    bool isEmpty();
    void enqueueRear(int d);
    int dequeueFront();
    void enqueueFront(int d);
    int dequeueRear();
    DEQueue(/* args */);
    ~DEQueue();
};

void DEQueue ::enqueueFront(int d) // complete this
{

    if (isFull())
    {
        cout << "Error in enqueueFront :: DEQueue is full\n";
        exit(0);
    }
    else
    {
        DEQueue *ptr2 = new DEQueue;
        ptr2->data = d;

        if (frontP == NULL)
        {
            frontP = ptr2;
            rearP = ptr2;
        }
        else
        {
            ptr2->previous = frontP;

            ptr2->next = frontP;

            frontP = ptr2;
        }
    }
}

int DEQueue ::dequeueRear()
{
    if (isEmpty())
    {

        cout << "Error in dequeueRear :: DEQueue is empty\n";
        exit(0);
    }
    else
    {
        if (rearP == NULL)
        {
            cout << "Error in dequeueRear :: DEQueue is empty\n";
            exit(0);
        }

        DEQueue *ptr = rearP;
        int d = rearP->data;

        rearP = rearP->previous;
        delete ptr;
        return d;
    }
}

void DEQueue ::enqueueRear(int d)
{
    if (isFull())
    {
        cout << "Error in enqueueRear :: DEqueue is full\n";
        exit(0);
    }
    else
    {
        DEQueue *n = new DEQueue;
        DEQueue *p = NULL;
        n->data = d;
        n->next = NULL;

        if (frontP == NULL)
        {
            frontP = n;
            rearP = n;
        }
        else
        {
            p = rearP;

            rearP->next = n;
            rearP = rearP->next;

            rearP->previous = p;
        }
    }
}

int DEQueue ::dequeueFront()
{
    if (isEmpty())
    {
        cout << "Error in dequeueFront :: DEQueue is empty\n";
        exit(0);
    }
    else
    {

        DEQueue *ptr = frontP;
        frontP = frontP->next;
        int d = ptr->data;
        delete ptr;
        return d;
    }
}

bool DEQueue ::isFull()
{
    DEQueue *ptr = new DEQueue;

    if (ptr == NULL)
    {
        delete ptr;
        return true;
    }
    else
    {
        delete ptr;
        return false;
    }
}

bool DEQueue ::isEmpty()
{
    if (frontP == NULL)
    {
        return true;
    }
    else
        return false;
}

DEQueue::DEQueue(/* args */)
{
}

DEQueue::~DEQueue()
{
}

int main()
{

   /* DEQueue ob;
    ob.enqueueRear(20);
    ob.enqueueRear(220);
    ob.enqueueRear(210);
    ob.enqueueRear(240);

    cout << ob.dequeueRear() << endl;
    cout << ob.dequeueRear() << endl;
    cout << ob.dequeueRear() << endl;
    cout << ob.dequeueRear() << endl;
*/
   
   /*string s1 = "Fork";
    string s2(s1,1,3);

    cout<<s2<<endl;
    */
   
    return 0;
}