#include <iostream>
#include <array>
#include <tuple>
using namespace std;

/*
The introduction of array class from C++11 has offered a better alternative for C-style arrays. The advantages of array class over C-style array are :-

Array classes knows its own size, whereas C-style arrays lack this property. So when passing to functions, we don’t need to pass size of Array as a separate parameter.
With C-style array there is more risk of array being decayed into a pointer. Array classes don’t decay into pointers
Array classes are generally more efficient, light-weight and reliable than C-style arrays.

Operations on array :- 
1. at() :- This function is used to access the elements of array. 
2. get() :- This function is also used to access the elements of array. This function is not the member of array class but overloaded function from class tuple. 
3. operator[] :- This is similar to C-style arrays. This method is also used to access array elements.
*/

void show(array<int, 5> ar)
{
    cout << "Elements of array : ";

    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar.at(i) << " ";
    }
    cout << "\n_______________________\n";
}

int main()
{
    array<int, 5> ar;

    for (int i = 0; i <= 5; i++)
    {
        ar[i] = i + 10;
    }

    show(ar);

    cout<<"Max size of ar :"<<ar.max_size()<<endl;

    return 0;
}