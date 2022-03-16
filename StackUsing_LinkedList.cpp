#include <iostream>
using namespace std;

class Stack
{

private:
    Stack *next = NULL;
    Stack *current = NULL;
    int data = 0;

public:
    Stack(int data);
    ~Stack();
    Stack();
    Stack *head = NULL; // Head is the top
    void push(int d);
    void print();
    bool isEmpty();
    bool isFull();
    int Pop();
    int atTop();
    int atBottom();
    int peek(int at);
};

bool Stack::isFull()
{
    Stack *ptr = new Stack;
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

int Stack::peek(int at)
{
    Stack *ptr = head;

    if (isEmpty() == true)
    {
        return -1;
    }
    while (at-- || ptr == NULL)
    {
        if (ptr == NULL)
        {
            return -1;
        }
        ptr = ptr->next;
    }
    return ptr->data;
}
int Stack::atTop()
{

    if (isEmpty() == true)
    {
        return -1;
    }
    return head->data;
}

int Stack::atBottom()
{
    if (isEmpty() == true)
    {
        return -1;
    }
    return current->data;
}

int Stack::Pop()
{
    if (isEmpty() == true)
    {
        return -1;
    }

    if (head == current)
    {
        int temp = head->data;
        Stack *ptr = head;
        head = head->next;
        delete ptr;
        current = NULL;
        return temp;
    }

    int temp = head->data;
    Stack *ptr = head;
    head = head->next;
    delete ptr;
    return temp;
}

bool Stack::isEmpty()
{

    if (head == NULL)
        return true;
    else
        return false;
}

Stack::Stack()
{ /* Default constructor */
}

Stack::~Stack() { delete current; }

Stack::Stack(int data)
{
    this->data = data;
}

void Stack::push(int d)
{

    if (isFull() == true)
    {
        cout << "Stack Overflow!\n";
        return;
    }

    Stack *ptr = new Stack(d);

    if (head == NULL)
    {
        head = ptr;
        head->next = NULL;
        current = ptr;
    }
    else
    {
        current->next = ptr;
        current = ptr;
        current->next = NULL;
    }
}

void Stack::print()
{

    if (isEmpty() == true)
    {
        return;
    }

    Stack *ptr = head;

    while (ptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{

    Stack ob;
    ob.push(4);
    ob.push(5);
    ob.push(6);

    ob.Pop();
    ob.Pop();
    ob.Pop();

    ob.push(3);
    ob.push(2);

    ob.print();

    return 0;
}
