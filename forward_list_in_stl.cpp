#include <iostream>
#include <forward_list>

using namespace std;

/*

Forward list in STL implements singly linked list. Introduced from C++11, forward list are more useful than other containers in insertion, removal and moving operations (like sort) and allows time constant insertion and removal of elements. 
It differs from list by the fact that forward list keeps track of location of only next element while list keeps track to both next and previous elements, thus increasing the storage space required to store each element. The drawback of forward list is that it cannot be iterated backwards and its individual elements cannot be accessed directly. 
Forward List is preferred over list when only forward traversal is required (same as singly linked list is preferred over doubly linked list) as we can save space. Some example cases are, chaining in hashing, adjacency list representation of graph, etc.

*/

void show(forward_list <int> list1){
  cout<<"List content : ";
   for(int &x: list1){
       cout<<x<<" ";
   }
   cout<<endl;
}

int main()
{
    forward_list <int> flist1;
    forward_list <int> flist2;

    flist1.assign({1,2,3});

    show(flist1);

    flist2.assign(5,4);

    show(flist2);

    forward_list<int> :: iterator it;
    it = flist2.begin();
    it++;
    flist2.emplace_after(it,9);

    show(flist2);

    flist1.splice_after(flist1.begin(),flist2);
    show(flist1);

    flist1.remove_if([](int x){return x%2 == 0;});
    show(flist1);

    return 0;
}