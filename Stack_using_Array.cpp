#include <iostream>
using namespace std;

template <typename T>

class Stack
{
private:
    T *ptr;
    int size = 0;
    int top = 0;

public:
    Stack(int size); // constructor
    void push(T data);
    bool isEmpty();
    bool isFull();
    void print();
    T peek(int index);
    T atTop();
    T atBottom();
    T pop();

    ~Stack();
};

template <typename T>
Stack<T>::Stack(int size)
{
    this->size = size;
    ptr = new int[size];
    top = -1;
}

template <typename T>
Stack<T>::~Stack()
{
}

template <typename T>
T Stack<T>::atTop()
{

    if (isEmpty())
    {
        cout << "Stack is empty\n";
        return -1;
    }
    else
    {
        return ptr[top];
    }
}

template <typename T>
T Stack<T>::atBottom()
{

    if (isEmpty())
    {
        cout << "Stack is empty\n";
        return -1;
    }
    else
    {
        return ptr[0];
    }
}

template <typename T>
T Stack<T>::peek(int index)
{

    if (index == 0)
    {
        cout << "Index start from 1\n";
        return -1;
    }
    if (top - (index + 1 > 0))
    {
        return ptr[top - index + 1];
    }
    else
    {
        return -1;
    }
}

template <typename T>
void Stack<T>::push(T data)
{
    if (top == size - 1)
    {
        cout << "Stack Overflow\n";
        return;
    }
    else
    {
        ++top;
        ptr[top] = data;
    }
}

template <typename T>
T Stack<T>::pop()
{
    T temp;

    if (!isEmpty())
    {
        temp = ptr[top];
        top--;
        size--;
        return temp;
    }
    else
    {
        cout << "Stack UnderFlow\n";
        return -1;
    }
}

template <typename T>
void Stack<T>::print()
{
    int s = size;
    if (top == -1)
    {
        return;
    }
    else
    {
        while (size--)
        {
            cout << *ptr++ << " ";
        }
    }
}

template <typename T>
bool Stack<T>::isEmpty()
{

    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <typename T>
bool Stack<T>::isFull()
{

    if (top == size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    Stack<int> s(3);

    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.atTop();

    return 0;
}