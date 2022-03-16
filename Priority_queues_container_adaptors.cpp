#include <iostream>
#include <queue>
using namespace std;

void show(priority_queue<int> p)
{
    priority_queue<int> pq=p;

    while (!pq.empty())
    {
        cout << pq.top() << "\t";
        pq.pop();
    }
    cout << endl;
}

void show(priority_queue<int, vector<int>, greater<int>> pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << "\t";
        pq.pop();
    }
    cout << endl;
}

int main()
{

    priority_queue<int> pq;

    cout << "Priority Queue in non-greater order :";
    pq.push(10);
    pq.push(5);
    pq.push(30);
    pq.push(15);

    show(pq);

    cout << "\ngquiz.size() : " << pq.size();
    cout << "\ngquiz.top() : " << pq.top();

    cout << "\ngquiz.pop() : ";
    pq.pop();

    show(pq);

    priority_queue<int, vector<int>, greater<int>> pqM;
    pqM.push(10);
    pqM.push(5);
    pqM.push(30);
    pqM.push(15);

    cout << "Priority Queue in greater order :";
    show(pqM);

    return 0;
}