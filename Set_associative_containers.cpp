#include <iostream>
#include <set>
using namespace std;

/*

Sets are a type of associative containers in which each element has to be unique because the value of the element identifies it.
The values are stored in a specific order.

Properties:

    The set stores the elements in sorted order.
    All the elements in a set have unique values.
    The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
    Sets follow the Binary search tree implementation.
    The values in a set are unindexed.

*/

void show(set<int, less<int>> s1)
{

    cout << "Elements of set in less:";

    set<int, less<int>>::iterator it;
    for (it = s1.begin(); it != s1.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;
}

void show(set<int, greater<int>> s1)
{

    cout << "Elements of set in greater:";

    set<int, greater<int>>::iterator it;
    for (it = s1.begin(); it != s1.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;
}

int main()
{
    set<int, less<int>> s1;

    s1.insert(30);
    s1.insert(40);
    s1.insert(4);
    s1.insert(8);
    s1.insert(32);

    show(s1);

    set<int, greater<int>> s2(s1.begin(), s1.end());

    show(s2);

    s2.erase(s2.begin(), s2.find(30));

    show(s2);

    cout << "s1.lower_bound(40) : \n"
         << *s1.lower_bound(40) << endl;
    cout << "s1.upper_bound(40) : \n"
         << *s1.upper_bound(40) << endl;

    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) :\n"
         << *s2.lower_bound(40) << endl;
    cout << "s2.upper_bound(40) : \n"
         << *s2.upper_bound(40) << endl;

    set<int> s3 = {45, 65, 30, 90};

    set<int>::iterator it1;

    for (it1 = s3.begin(); it1 != s3.end(); ++it1)
    {
        cout << *it1 << " ";
    }

    cout<<endl<<endl;

    set<int,less<int>> newgg;

    newgg.insert(34);
    newgg.insert(35);
    newgg.insert(34);
    
    cout<<newgg.size();

    show(newgg);

    
    return 0;
}