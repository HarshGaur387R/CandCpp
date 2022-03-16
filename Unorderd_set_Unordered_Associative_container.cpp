#include <iostream>
#include <unordered_set>
using namespace std;

/*

An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized. 
All operations on the unordered_set takes constant time O(1) on an average which can go up to linear time O(n) in worst case which depends on the internally used hash function, but practically they perform very well and generally provide a constant time lookup operation. 
The unordered_set can contain key of any type – predefined or user-defined data structure but when we define key of type user define the type, we need to specify our comparison function according to which keys will be compared. 

Sets vs Unordered Sets ~

Set is an ordered sequence of unique keys whereas unordered_set is a set in which key can be stored in any order, so unordered. Set is implemented as a balanced tree structure that is why it is possible to maintain order between the elements (by specific tree traversal). The time complexity of set operations is O(log n) while for unordered_set, it is O(1). 
Methods on Unordered Sets: 
For unordered_set many functions are defined among which most used are the size and empty for capacity, find for searching a key, insert and erase for modification. 
The Unordered_set allows only unique keys, for duplicate keys unordered_multiset should be used. 

*/

int main()
{
    unordered_set <string> us1;
    us1.insert("c++");
    us1.insert("is");
    us1.insert("powerfull");
    us1.insert("and");
    us1.insert("fast");

    string key = "java";

    if(us1.find(key) == us1.end()){
        cout<<key<<" not found!\n";
    }
    else{
        cout<<key<<" found";
    }

    key = "c++";

     if(us1.find(key) == us1.end()){
        cout<<key<<" not found!\n";
    }
    else{
        cout<<key<<" found";
    }


    return 0;
}