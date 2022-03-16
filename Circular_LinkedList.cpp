#include <iostream>
using namespace std;

class Node
{
private:
    Node *head = NULL;
    Node *next = NULL;
    int data;
    Node *current = NULL;

public:
    void add(int data);
    void display();
    void InsertAtFirst(int data);
    Node();
    ~Node();
};

Node::Node()
{
}

Node::~Node()
{
}

void Node::add(int a)
{

    Node *ptr = new Node;
    ptr->data = a;

    if (head == NULL)
    {
        head = ptr;
        head->next = head;
        current = ptr;
    }
    else
    {
        current->next = ptr;
        current = ptr;
        current->next = head;
    }
}

void Node::display()
{

    Node *newHead = head;

    int i = 0;

    cout << newHead->data;
    newHead = newHead->next;

    while (newHead != head)
    {
        cout << " " << newHead->data;
        newHead = newHead->next;

        i++;
    }
    
}

void Node::InsertAtFirst(int data){

    Node * ptr = new Node;
    ptr->data = data;

    current->next = ptr;
    ptr->next = head;
    head = ptr;

}

int main()
{
    Node ob;
    ob.add(4);
    ob.add(8);
    ob.add(90);
    ob.add(87);
    ob.add(18);
    ob.add(70);
    ob.InsertAtFirst(100);
    ob.InsertAtFirst(200);
    ob.add(78);
    ob.add(99);
    ob.display();

    return 0;
}