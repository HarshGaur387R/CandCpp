#include <iostream>
using namespace std;

class Node
{
private:
    Node *head = NULL;
    Node *previous = NULL;
    Node *next = NULL;
    Node *current = NULL;
    int data;

public:
    void add(int data);
    void display();
    void reverseDisplay();
    Node();
    ~Node();
};

Node::Node()
{
}

Node::~Node()
{
}

void Node::add(int data)
{

    Node *ptr = new Node;
    ptr->data = data;

    if (head == NULL)
    {
        head = ptr;
        head->next = NULL;
        head->previous = NULL;
        current = ptr;
    }
    else
    {
        ptr->previous = current;
        current->next = ptr;
        current = ptr;
        current->next = NULL;
    }
}

void Node::display()
{

    Node *ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

}

void Node :: reverseDisplay(){

    Node *ptr = current;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->previous;
    }
}

int main()
{

    Node ob;
    ob.add(3);
    ob.add(4);
    ob.add(5);
    ob.add(7);

    ob.display();

    ob.add(10);
    ob.add(89);
    ob.add(78);
    cout<<endl;
    ob.reverseDisplay();

    return 0;
}