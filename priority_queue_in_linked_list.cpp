#include <iostream>
using namespace std;

class pNode // highest number of priority is on top
{

private:
    pNode *next = NULL;
    pNode *head = NULL;
    int priority = 0;
    int data = 0;

public:
    static pNode *createNode(int d, int p);
    int peek();
    void push(int d, int p);
    void pop();
    bool isEmpty();
};

bool pNode::isEmpty()
{

    if (head == NULL)
        return true;
    else
        return false;
}

void pNode::pop()
{
    pNode *tmp = head;
    head = head->next;
    delete tmp;
}

void pNode::push(int d, int p)
{
    pNode *newNode = pNode::createNode(d, p);
    // pNode * temp = head->next;

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    if (newNode->priority > head->priority)
    {

        newNode->next = head;
        head = newNode;
        return;
    }

    else
    {
        pNode *start = head;

        while (start->next != NULL && start->next->priority > newNode->priority)
        {
            start = start->next;
        }

        newNode->next = start->next;
        start->next = newNode;
        return;
    }
}

int pNode::peek()
{
    return head->data;
}

pNode *pNode::createNode(int d, int p)
{
    pNode *temp = new pNode;
    temp->data = d;
    temp->priority = p;

    return temp;
}

int main()
{
    pNode *tmp;
    pNode *ob = new pNode;
    ob->push(11, 4);
    ob->push(10, 0);
    ob->push(4, 1);
    ob->push(5, 2);
    ob->push(6, 3);

    while (ob->isEmpty() != true)
    {
        cout << ob->peek() << endl;
        ob->pop();
    }

    delete ob;
    return 0;
}