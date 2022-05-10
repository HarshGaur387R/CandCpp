#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

class pQueue
{

private:
    int capasity = 0;
    pQueue *pqArr = NULL;
    int priority = 0;
    int value = 0;
    int size = -1;

public:
    void insert(int val, int priority);
    int peek();
    void deleteHigh();
    pQueue(int capasity);
    ~pQueue()
    {
        free(pqArr);
    }
};

pQueue ::pQueue(int cap)
{
    pqArr = (pQueue *)malloc(cap * sizeof(pQueue));
    capasity = cap;
}

void pQueue::deleteHigh()
{

    int ind = peek();

    for (int k = ind; k <= size; k++)
    {
        pqArr[k] = pqArr[k + 1];
    }
}

int pQueue ::peek()
{
    int index = -1;
    int highestPriority = INT_MIN;
    if (size == -1)
    {
        cout << "Array is empty!\n";
        return -1;
    }

    for (int i = 0; i <= size; i++)
    {
        if (highestPriority < pqArr[i].priority)
        {
            highestPriority = pqArr[i].priority;
            index = i;
        }
        else if (highestPriority == pqArr[i].priority && index > -1 && pqArr[i].value > pqArr[index].value)
        {
            highestPriority = pqArr[i].priority;
            index = i;
        }
    }
    return index;
}

void pQueue ::insert(int val, int pr)
{
    size++;

    if (size > capasity)
    {
        cout << "Pq is overflow!\n";
        size--;
        return;
    }

    pqArr[size].priority = pr;
    pqArr[size].value = val;
}

int main()
{
    pQueue ob(10);

    ob.insert(40, 10);
    ob.insert(20, 20);
    ob.insert(22, 19);
    ob.insert(100, 29);
    ob.insert(50, 30);

    cout << ob.peek() << endl;
    ob.deleteHigh();

    cout << ob.peek();

    // value    ->        [4]  [6]  [35]  [9]  [8]
    // Priority ->         2    3    12    4    3

    return 0;
}