#include <iostream>

using namespace std;

class stack
{

private:
    char data;
    stack *next = NULL;

public:
    stack *head = NULL;
    stack();
    stack(char data);
    bool push(char data);
    bool pop(char c);
    bool isFull();
    bool isEmpty();
};

bool stack ::isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool stack ::isFull()
{
    stack *ptr = new stack;
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

bool stack ::pop(char c)
{

    if (isEmpty())
    {
        return false;
    }
    if (c == ')' && head->data == '(')
    {
        stack *ptr;
        ptr = head;
        head = head->next;
        delete ptr;
        return true;
    }
    if (c == ']' && head->data == '[')
    {
        stack *ptr;
        ptr = head;
        head = head->next;
        delete ptr;
        return true;
    }
    if (c == '}' && head->data == '{')
    {
        stack *ptr;
        ptr = head;
        head = head->next;
        delete ptr;
        return true;
    }
    else
    {
        return false;
    }
}

bool stack ::push(char data)
{
    if (isFull())
    {
        return false;
    }
    else
    {
        stack *ptr = new stack(data);

        if (head == NULL)
        {
            head = ptr;
            head->next = NULL;
        }
        else
        {
            ptr->next = head;
            head = ptr;
        }

        return true;
    }
}

stack::stack()
{
    // default cons//
}

stack::stack(char data)
{
    this->data = data;
}

bool isStable(string str)
{

    stack *ob = new stack;
    bool pushResponse = false;
    bool popResponse = false;

    for (auto &&i : str)
    {
        if ((i == '(') || (i == '[') || (i == '{'))
        {
            pushResponse = ob->push(i);
            if (pushResponse == false)
            {
                delete ob;
                return false;
            }
            else if (pushResponse == true)
            {
            }
        }
        else if ((i == ')') || (i == ']') || (i == '}'))
        {
            popResponse = ob->pop(i);
            if (popResponse == false)
            {
                delete ob;
                return false;
            }
            else if (popResponse == true)
            {
            }
        }
    }
    if (ob->isEmpty())
    {
        delete ob;
        return true;
    }
    else
    {
        delete ob;
        return false;
    }
}

int main()
{

    if (isStable(string("{[(1+2)] + (0-1)}(9-4)")))
        cout << "yes its stable!";
    else
        cout << "No its not stable!";

    return 0;
}