#include <iostream>
using namespace std;

class Stack
{

private:
    Stack *next = NULL;

public:
    char data;
    Stack *top = NULL;
    Stack();
    char pop();
    void push(char d);
    bool isEmpty();
    bool isFull();
};

Stack ::Stack()
{
}

bool Stack ::isFull()
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

bool Stack ::isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Stack::push(char c)
{
    if (!isFull())
    {
        Stack *ptr = new Stack;
        ptr->data = c;

        if (top == NULL)
        {
            top = ptr;
            top->next = NULL;
        }
        else
        {
            ptr->next = top;
            top = ptr;
        }
    }
    else
    {
        cout << "Inside push : ISFULL = true\n";
        exit(0);
    }
}

char Stack ::pop()
{

    if (!isEmpty())
    {
        char c;
        Stack *ptr = top;

        c = top->data;
        top = top->next;
        delete ptr;
        return c;
    }
    else
    {
        cout << "Inside pop : ISEMPTY = true\n";
        exit(0);
    }
}

bool isOperand(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infix_to_postfix(string infix)
{
    Stack *ob = new Stack;
    string postfix;
    string ::iterator it;
    it = infix.begin();

    while (it != infix.end())
    {
        if (isOperand(*it) == true)
        {
            postfix += *it;
        }
        else if (isOperand(*it) == false)
        {
            if (*it == '(')
            {
                ob->push(*it);
            }
            else if (*it == ')')
            {
                while (ob->top->data != '(')
                {
                    postfix += ob->pop();
                    if (ob->top == NULL)
                    {
                        break;
                    }
                }
                ob->pop();
            }

            else
            {
                while (!ob->isEmpty() && prec(*it) <= prec(ob->top->data))
                {
                    postfix += ob->pop();
                }
                ob->push(*it);
            }
        }
        it++;
    }

    while (ob->isEmpty() != true)
    {
        postfix += ob->pop();
    }

    delete ob;
    return postfix;
}

int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i"; // output : abcd^e-fgh*+^*+i-
    cout << infix_to_postfix(exp);

    return 0;
}