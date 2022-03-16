// C++ program to implement find and erase for specific
// key-value pair for unordered_multimap
#include <bits/stdc++.h>
using namespace std;

/*
We have discussed unordered_map in our previous post , but there is a limitation, we can not store duplicates in unordered_map,
that is if we have a key-value pair already in our unordered_multimap and another pair is inserted, then both will be there whereas in case of unordered_map the previous value corresponding to the key is updated by the new value that is only would be there.
Even can exist in unordered_multimap twice.

Internal Representation:
The internal implementation of unordered_multimap is the same as that of unordered_map but for duplicate keys, another count value is maintained with each key-value pair.
As pairs are stored in the hash table, there is no particular order among them but pair with same keys come together in data structure whereas pair with same values are not guaranteed to come together.

Time Complexity:
All operation on unordered_multimap takes a constant amount of time on an average but time can go to linear in the worst case depending on internally used hash function but in long run unordered_multimap outperforms multimap (tree-based multimap).

We can use the initializer list for initializing and inserting many pairs at once.
There is no [] operator for unordered_multimap because values corresponding to a key are not unique, there can be many values associated with a single key so [] operator can not be applied to them.
Erase function deletes all instances of values associated with the supplied key.
Find function returns an iterator to any instance of key-value pair among all pairs associated with that key.

How to access/delete if a specific value for a key?
If we want to check whether a specific is there or not, we need to loop over all pairs of key-value corresponding to k, in a similar way we can erase one copy of a specific from the data structure.
There is no specified order in which all values of a key are stored.
*/

// making typedef for short declaration
typedef unordered_multimap<string, int>::iterator umit;

// function to check whether p is there in map or not
bool find_kv(unordered_multimap<string, int> &umm,
             pair<string, int> p)
{
    // equal_range returns pair of iterator of first and
    // last position associated with key
    pair<umit, umit> it = umm.equal_range(p.first);
    umit it1 = it.first;

    pair<string, int> tmp;

    // looping over all values associated with key
    while (it1 != it.second)
    {
        tmp = *it1;
        if (tmp == p)
            return true;
        it1++;
    }
    return false;
}

// function to delete one copy of pair p from map umm
void erase_kv(unordered_multimap<string, int> &umm,
              pair<string, int> p)
{
    // equal_range returns pair of iterator of first and
    // last position associated with key
    pair<umit, umit> it = umm.equal_range(p.first);
    umit it1 = it.first;
    pair<string, int> tmp;

    // looping over all values associated with key
    while (it1 != it.second)
    {
        tmp = *it1;
        if (tmp == p)
        {
            // iterator version of erase : deletes pair
            // at that position only
            umm.erase(it1);
            break;
        }
        it1++;
    }
}

// Utility function to print unordered_multimap
void printUmm(unordered_multimap<string, int> umm)
{
    // begin() returns iterator to first element of map
    umit it = umm.begin();
    for (; it != umm.end(); it++)
        cout << "<" << it->first << ", " << it->second
             << "> ";
    cout << endl;
}

// Driver code
int main()
{
    // initializing multimap by initializer list
    unordered_multimap<string, int> umm({{"apple", 1},
                                         {"ball", 2},
                                         {"apple", 10},
                                         {"cat", 7},
                                         {"dog", 9},
                                         {"cat", 6},
                                         {"apple", 1}});

    cout << "Initial content\n";
    printUmm(umm);
    pair<string, int> kv = make_pair("apple", 1);

    // inserting one more <apple, 1> pair
    umm.insert({"apple", 1});
    cout << "\nAfter insertion of one more <apple, 1>\n";
    printUmm(umm);

    if (find_kv(umm, kv))
        erase_kv(umm, kv);
    else
        cout << "key-value pair is not there in unordered "
                "multimap\n";

    cout << "\nAfter deletion one occurrence of <apple, "
            "1>\n";
    printUmm(umm);
}