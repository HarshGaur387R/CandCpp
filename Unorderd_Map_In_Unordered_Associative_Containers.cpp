#include <iostream>
#include <unordered_map>

using namespace std;

/*

unordered_map is an associated container that stores elements formed by the combination of key-value and a mapped value.
The key value is used to uniquely identify the element and the mapped value is the content associated with the key.
Both key and value can be of any type predefined or user-defined.
Internally unordered_map is implemented using Hash Table,
the key provided to map are hashed into indices of a hash table that is why the performance of data structure depends on hash function a lot but on an average,
the cost of search, insert and delete from the hash table is O(1).

*/

void show(unordered_map<string, int> um1)
{

    cout << "Keys\telements" << endl;
    for (auto x : um1)
    {
        cout << x.first << "\t" << x.second << endl;
    }
}

int main()
{

    unordered_map<string, int> um1;
    um1["GeeksforGeeks"] = 10;
    um1["Practice"] = 20;
    um1["Contribute"] = 30;
    um1.insert(make_pair("hemlo hehe", 40));

    string key = "hemlo hehe";
    show(um1);

    // If key not found in map iterator to end is returned
    if (um1.find(key) == um1.end())
        cout << key << " not found\n\n";
    else
        cout << "Found " << key << endl;

    return 0;
}

/*
unordered_map vs unordered_set :
In unordered_set, we have only key, no value, these are mainly used to see presence/absence in a set.
For example, consider the problem of counting the frequencies of individual words.
We can’t use unordered_set (or set) as we can’t store counts.

unordered_map vs map :
map (like set) is an ordered sequence of unique keys whereas in unordered_map key can be stored in any order, so unordered.
The map is implemented as a balanced tree structure that is why it is possible to maintain order between the elements (by specific tree traversal).
The time complexity of map operations is O(log n) while for unordered_map, it is O(1) on average.

Methods on unordered_map
A lot of functions are available which work on unordered_map. most useful of them are – operator =, operator [], empty and size for capacity, begin and end for the iterator, find and count for lookup, insert and erase for modification.
The C++11 library also provides functions to see internally used bucket count, bucket size, and also used hash function and various hash policies but they are less useful in real applications.
We can iterate over all elements of unordered_map using Iterator.
*/