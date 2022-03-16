#include <iostream>
using namespace std;

class Node
{
private:
    int data = 0;

public:
    Node *next = NULL;
    Node *previous = NULL;
    Node *head = NULL;
    Node *last = NULL;
    struct LargeArray
    {
        bool isNUL;
        int value;
    };

    int size = 0;
    bool isFull();
    bool isEmpty();
    void insert(int d);
    LargeArray remove();
    Node(/* args */);
    ~Node();
};

Node ::LargeArray Node::remove()
{
    LargeArray status;

    if (isEmpty())
    {
        cout << "Error in remove:: List is Empty!\n";
        exit(0);
    }
    else
    {
        if (last == NULL)
        {
            // last = head;
            status.isNUL = true;
            status.value = -1;
            return status;
        }

        Node *ptr = last;
        status.isNUL = false;
        status.value = ptr->data;

        last->next = NULL;
        last = last->previous;
        delete ptr;
        size--;
        return status;
    }
}

void Node::insert(int d)
{
    if (isFull())
    {
        cout << "Error in insert:: List Is Full!\n";
        exit(0);
    }
    else
    {
        size++;
        Node *ptr = new Node;
        ptr->data = d;
        ptr->next = NULL;
        ptr->previous = NULL;

        if (head == NULL)
        {
            head = ptr;
            last = ptr;
            last->previous = NULL;
        }
        else
        {
            Node *ptr2 = last;

            if (last == NULL)
            {
                head = ptr;
                last = ptr;
                last->previous = NULL;
            }
            else if (last != NULL)
            {

                last->next = ptr;
                last = last->next;
                last->previous = ptr2;
            }
        }
    }
}

bool Node ::isFull()
{
    Node *ptr = new Node;
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

bool Node ::isEmpty()
{
    Node *ptr = head;

    if (ptr == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Node::Node(/* args */)
{
}

Node::~Node()
{
}

int binary_search(int num, Node *ob)
{
    Node *ptr = new Node;
    Node *high = ob->head;
    Node *low = ob->last;

    ptr = ob->head;
    // Finding Middle Start
    for (int i = 0; i < ob->size / 2; i++)
    {
        ptr = ptr->next;
    }
    // Finding Middle End
}

int main()
{
    Node ob;
    ob.insert(30);
    ob.insert(34);
    ob.insert(90);
    ob.insert(50);

    while (ob.size != 0)
    {
        cout << ob.remove().value << endl;
    }

    ob.insert(330);
    ob.insert(434);

    while (ob.size != 0)
    {
        cout << ob.remove().value << endl;
    }
    return 0;
}