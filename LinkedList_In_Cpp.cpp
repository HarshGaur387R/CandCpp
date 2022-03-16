#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node
{
private:
    Node *next = NULL;
    Node *current = NULL;
    int data = 0;

public:
    Node();
    ~Node();
    Node *head = NULL;
    void add(int a);
    void display();
    void insertAtFirst(int element);
    void insertAtIndex(int element, int index);
    void insertAtEnd(int element);
    void insertAfterNode(Node *preNode, int data);
    void deleteAtFirst();
    void deleteAtIndex(int index);
    void deleteAtEnd();
    void deleteData(int data);
    void reverseDisplay(Node *head);   // recursive method
    void recursiveDisplay(Node *head); // recursive method
    int factorial(int n);
    int fun1();                                    // Returns sum of factorials of each prime numbers inside linked list.
    void MoveToFront();                            // Geeks for Geeks Exercise
    void findCommon(Node *head2);                  // Geeks for Geeks Exercise
    int findInterSectingPoint(Node *head2);        // Geeks for Geeks Exercise
    int findInterSectingPointMethod2(Node *head2); // Geeks for Geeks Exercise
};

Node::Node()
{
}

int Node ::findInterSectingPointMethod2(Node *head2)
{

    Node *temp1 = head;
    Node *temp2 = head2;

    while (temp1 != temp2)
    {
        if (temp1 == NULL)
        {
            temp1 = head2;
            temp2 = temp2->next;
           
        }
        else if (temp2 == NULL)
        {
            temp2 = head;
            temp1 = temp1->next;
            
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return temp1->data;
}

int Node ::findInterSectingPoint(Node *head2)
{

    Node *ptr = head;
    Node *ptr2 = head2;
    unordered_map<Node *, int> temp;

    while (ptr)
    {
        temp[ptr]++;
        ptr = ptr->next;
    }

    while (ptr2)
    {

        if (temp.find(ptr2) == temp.end())
        {
            ptr2 = ptr2->next;
        }

        else
        {
            return ptr2->data;
        }
    }

    return -1;
}

void Node ::findCommon(Node *head2)
{

    Node *ptr = head;
    Node *ptr2 = head2;
    Node *ptr3 = NULL;

    while (ptr != NULL || ptr2 != NULL)
    {

        if (ptr->data > ptr2->data)
        {
            if (ptr2->next == NULL)
            {
                break;
            }
            else
            {
                ptr2 = ptr2->next;
            }
        }

        else if (ptr2->data > ptr->data)
        {
            if (ptr->next == NULL)
            {
                break;
            }
            else
            {
                ptr = ptr->next;
            }
        }

        else if (ptr->data == ptr2->data)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
            ptr2 = ptr2->next;
        }
        if (ptr == NULL || ptr2 == NULL)
        {
            break;
        }
    }

    // return a new head;
}

void Node::add(int a)
{

    Node *ptr = new Node;
    ptr->data = a;

    if (head == NULL)
    {
        head = ptr;
        head->next = NULL;
        current = ptr;
        current->next = NULL;
    }
    else
    {
        current->next = ptr;
        current = ptr;
        current->next = NULL;
    }
}

void Node::display()
{

    if (head == NULL || head->next == NULL)
    {
        return;
    }
    Node *newHead = head;

    while (newHead != NULL)
    {

        cout << newHead->data << " ";
        newHead = newHead->next;
    }
}

void Node::insertAtFirst(int element)
{
    Node *newHead = new Node;

    newHead->data = element;
    newHead->next = head;
    head = newHead;
}

void Node::insertAtIndex(int index, int element)
{
    int i = 0;

    Node *p = new Node;
    p->data = element;

    Node *newHead = new Node;
    newHead = head;

    while (i != index - 1)
    {
        newHead = newHead->next;
        i++;
    }
    p->next = newHead->next;
    newHead->next = p;
}

void Node::insertAtEnd(int element)
{
    Node *ptr = new Node;
    ptr->data = element;

    current->next = ptr;
    current = ptr;
    ptr->next = NULL;
}

void Node::insertAfterNode(Node *preNode, int data)
{
    Node *ptr = new Node;
    ptr->data = data;

    preNode->next = ptr->next;
    ptr->next = preNode;
}

void Node::deleteAtFirst()
{

    Node *ptr = head;
    head = head->next;

    delete ptr;
}

void Node::deleteAtIndex(int index)
{

    Node *ptr = head;
    Node *qptr;
    int i = 0;

    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }

    qptr = ptr->next;
    ptr->next = qptr->next;

    delete qptr;
}

void Node::deleteAtEnd()
{

    Node *ptr = head;
    Node *ptr2 = head->next;

    while (ptr2->next != NULL)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }
    ptr->next = NULL;
    current = ptr;
    delete ptr2;
}

void Node::deleteData(int data)
{

    Node *ptr = head;
    Node *ptr2 = head->next;

    while (ptr2->data != data && ptr2->next != NULL)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }

    if (ptr2->data == data)
    {
        ptr->next = ptr2->next;
        delete ptr2;
    }
}

void Node::reverseDisplay(Node *head)
{

    if (head == NULL)
    {
        return;
    }
    reverseDisplay(head->next);
    cout << head->data << " ";
}

void Node ::recursiveDisplay(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    recursiveDisplay(head->next);
}

int Node::factorial(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int Node::fun1()
{

    Node *ptr = head;
    int total = 0;

    while (ptr != NULL)
    {
        int m = 0, i = 0, flag = 0;
        m = ptr->data / 2;
        for (i = 2; i <= m; i++)
        {
            if (ptr->data % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            total += factorial(ptr->data);
        }
        ptr = ptr->next;
    }

    return total;
}

void Node::MoveToFront()
{

    Node *ptr = head;
    Node *ptr2 = head->next;

    while (ptr2->next != NULL)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }

    ptr->next = head;
    ptr2->next = head->next;
    head->next = NULL;

    head = ptr2;
}

Node::~Node()
{
}

int main()
{

    Node *ob = new Node;

    ob->add(4);
    ob->add(1);
    ob->add(8);
    ob->add(4);
    ob->add(5);

    Node *ob2 = new Node;

    ob2->add(5);
    ob2->add(6);
    ob2->add(1);

    // ob->findCommon(ob2->head);

    cout << ob->findInterSectingPoint(ob2->head) << endl;

    

    delete ob;
    delete ob2;

    // Linked List 1 = 4->1->common
    // Linked List 2 = 5->6->1->common
    // common = 8->4->5->NULL

    return 0;
}

/*
    =================== METHOD 2 =================

    Node* temp1 = head1;
    Node* temp2 = head2;

    while(temp1!=temp2){
       if(temp1->next == NULL){
           temp1 = head2;
           temp2 = temp2->next;
           return -1;
       }
       else if(temp2->next == NULL){
           temp2 = head1;
           temp1 = temp1->next;
           return -1;
       }
       else{
           temp1 = temp1->next;
           temp2 = temp2->next;
       }
   }
    return temp1->data;


    [3]   [4]
     |     |
    [6]   [8]
     |     |
    [7]   [9]
     |_____|    <-- [9] NEXT IS [5]
    [5]
     |
    [12]
     |
    [10]
     |
    NULL
*/