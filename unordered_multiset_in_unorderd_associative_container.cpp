#include <iostream>
#include <unordered_set>
#include <bits/stdc++.h>

// typedef unordered_multiset<int>::iterator umit;


/*

We have discussed about unordered_set in our previous post the problem with unordered_set is that, 
it is not possible to store duplicate entries in that data structure. 
For example if we have some value v already in unordered_set, inserting v again will have no effect. 
To handle this duplication unordered_multiset should be used, it can store duplicate elements also. 
Internally when an existing value is inserted, the data structure increases its count which is associated with each value. 
As count of each value is stored in unordered_multiset, it takes more space than unordered_set (if all values are distinct). 
The internal implementation of unordered_multiset is same as that of unordered_set and also uses hash table for searching, 
just the count value is associated with each value in former one. Due to hashing of elements it has no particular order of storing the elements so all element can come in any order but duplicate element comes together. 
All operation on unordered_multiset takes constant time on average but can go upto linear in worst case. 

*/

using namespace std;

void show(unordered_multiset<int> ums1)
{
    unordered_multiset<int>::iterator it;

    for (it = ums1.begin(); it != ums1.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void erase_one_entery(unordered_multiset<int> &ums1, int n)
{

    unordered_multiset<int>::iterator it = ums1.find(n);

    if (it != ums1.end())
    {
        ums1.erase(it);
    }
}

int main()
{

    unordered_multiset<int> ums1({2, 7, 2, 5, 0, 3, 7, 5});

    cout << "ums1 elements : ";
    show(ums1);

    if (ums1.empty())
        cout << "unordered multiset 1 is empty\n";
    else
        cout << "unordered multiset 1 is not empty\n";

    ums1.insert(12);

    cout << "ums1 elements : ";
    show(ums1);

    int cnt = ums1.count(5);
    cout << 5 << " appears " << cnt
         << " times in unordered multiset 1 \n";

    pair<unordered_multiset<int>::iterator, unordered_multiset<int>::iterator> erange_it = ums1.equal_range(7);

    if (erange_it.first != erange_it.second)
    {
        cout << 7 << " appeared atleast once in "
                     "unoredered_multiset \n";
    }

    erase_one_entery(ums1, 7);
    cout << "ums1 elements : ";
    show(ums1);

    return 0;
}