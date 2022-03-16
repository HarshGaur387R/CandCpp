#include <iostream>
using namespace std;

class stack
{

private:
    
    stack *next = NULL;

public:
    char data;
    stack *top = NULL;
    stack();
    char pop();
    void push(char d);
    bool isEmpty();
    bool isFull();
    void print();
};

void stack ::print()
{
    stack *ptr;
    ptr = top;

    while (ptr)
    {
        cout << ptr->data;
        ptr = ptr->next;
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

bool stack ::isEmpty()
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

void stack::push(char c)
{
    if (!isFull())
    {
        stack *ptr = new stack;
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

char stack ::pop()
{

    if (!isEmpty())
    {
        char c;
        stack *ptr;
        ptr = top;
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
stack ::stack()
{
    /*default constructor*/
}

bool isOperator(char ch)
{
    if (ch == '-' || ch == '+' || ch == '*' || ch == '/')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int presidency(char ch){
    if(ch == '*' || ch == '/'){
        return 3;
    }
    else if(ch == '-' || ch == '+'){
        return 2;
    }
    else return 0;
}


string infix_to_postfix(string infix)
{
    stack * ob = new stack;
    string postfix;
    string ::iterator it;
    it = infix.begin();

    while (it != infix.end())
    {
        if(!isOperator(*it)){
            postfix += *it;
            it++;
        }
        else{
            if(ob->isEmpty()){
                ob->push(*it);
                it++;
            }
            else if(!ob->isEmpty())
            {
                if(presidency(*it) > presidency(ob->top->data)){
                    ob->push(*it);
                    it++;
                }
                else
                {
                    postfix += ob->pop();
                }
                
            }
            
        }
    }

    while (!ob->isEmpty())
    {
        postfix += ob->pop();
    }
    
    delete ob;
    return postfix;
}

int main()
{

string infix = "A-B/C*A/K-L";
cout<<infix_to_postfix(infix);

    return 0;
}