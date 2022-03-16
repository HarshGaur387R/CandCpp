#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

/*
Please note that the title is Functors (Not Functions)!!

Consider a function that takes only one argument. However, while calling this function we have a lot more information that we would like to pass to this function, 
but we cannot as it accepts only one parameter. What can be done?
One obvious answer might be global variables. However, good coding practices do not advocate the use of global variables and say they must be used only when there is no other alternative.

Functors are objects that can be treated as though they are a function or function pointer. 
Functors are most commonly used along with STLs.

This code snippet adds only one value to the contents of the arr[]. Now suppose, that we want to add 5 to contents of arr[].

See what’s happening? As transform requires a unary function(a function taking only one argument) for an array, we cannot pass a number to increment(). 
And this would, in effect, make us write several different functions to add each number. What a mess. This is where functors come into use.

A functor (or function object) is a C++ class that acts like a function. 
Functors are called using the same old function call syntax. To create a functor, we create a object that overloads the operator().

*/

//functor

class functors
{
private:
    int num;
public:
    functors(int n) : num(n){};
    
    //operator overloading class object

    int operator()(int add_to){
        return num+add_to;
    }
};


int main()
{
    int arr[] = {1,2,3,4,5};

    transform(arr,arr+5,arr,functors(1));

    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<"\n";
    
    // or we can use lambda method

    transform(arr,arr+5,arr,[](int x){return x+1;});

    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}