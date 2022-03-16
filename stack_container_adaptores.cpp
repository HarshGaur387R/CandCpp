#include <iostream>
#include <stack>

using namespace std;

/*
Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, 
where a new element is added at one end (top) and an element is removed from that end only.  
Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, 
providing a specific set of member functions to access its elements.

*/

void show(stack<int> st)
{

    while (!st.empty())
    {
        cout << st.top() << "\t";
        st.pop();
    }
    cout << endl;
}

int main()
{

    stack <int> st;
    st.push(30);
    st.push(8);
    st.push(89);
    st.push(78);

    cout << "stack elements :";
    show(st);

    st.pop();
    st.pop();

    cout << "\nstack elements :";
    show(st);

    return 0;
}