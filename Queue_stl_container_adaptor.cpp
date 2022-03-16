#include <iostream>
#include <queue>

using namespace std;

void show(queue<int> qu1)
{

    queue<int> q = qu1;

    while (!q.empty())
    {
        cout << q.front() << "\t";
        q.pop();
    }
    cout << "\n";
}

int main()
{
    /*
    Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement.
    Elements are inserted at the back (end) and are deleted from the front.
    Queues use an encapsulated object of deque or list (sequential container class) as its underlying container,
    providing a specific set of member functions to access its elements.
    */

    queue<int> qu;
    qu.push(30);
    qu.push(20);
    qu.push(10);

    show(qu);

    cout << "Size of qu :" << qu.size() << endl;
    cout << "front element :" << qu.front() << endl;
    cout << "last element :" << qu.back() << endl;

    qu.pop();

    show(qu);

    return 0;
}