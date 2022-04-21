#include <bits/stdc++.h>
using namespace std;

////////////////////////////////Starts here//////////////////////
template <class T>
class Smartptr
{
private:
    T *ptr = NULL;

public:
    explicit Smartptr(T *p = NULL);
    ~Smartptr();

    T &operator*() { return *ptr; }

    T *operator->() { return ptr; }
};

template <class T>
Smartptr<T>::Smartptr(T *p)
{
    ptr = p;
}

template <class T>
Smartptr<T>::~Smartptr()
{
    delete ptr;
}
///////////////////////////////Ends here///////////////////////

int main()
{

    Smartptr<int> ptr(new int());
    *ptr = 20;

    cout << *ptr;

    Smartptr<int> ptr2(new int());


    return 0;
}