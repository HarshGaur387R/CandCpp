#include <iostream>
#include <map>
using namespace std;

/*
Multimap is similar to map with an addition that multiple elements can have same keys.
Also, it is NOT required that the key value and mapped value pair has to be unique in this case.
One important thing to note about multimap is that multimap keeps all the keys in sorted order always.
These properties of multimap makes it very much useful in competitive programming.
*/

void show(multimap<int, int> m1)
{

    cout << "KEY\tELEMENTS\n";
    for (multimap<int, int>::iterator it = m1.begin(); it != m1.end(); ++it)
    {
        cout << it->first << "\t" << it->second << endl;
    }
    cout << endl;
}

int main()
{

    multimap<int, int> m1;

    m1.insert(pair<int, int>(1, 20));
    m1.insert(pair<int, int>(2, 30));
    m1.insert(pair<int, int>(3, 40));
    m1.insert(pair<int, int>(5, 60));
    m1.insert(pair<int, int>(4, 50));
    m1.insert(pair<int, int>(4, 89));
    show(m1);

    m1.erase(m1.begin(), m1.find(4));

    show(m1);

    // lower bound and upper bound for map gquiz1 key = 5
    cout << "m1.lower_bound(5) : "
         << "\tKEY = ";
    cout << m1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << m1.lower_bound(5)->second << endl;
    cout << "m1.upper_bound(5) : "
         << "\tKEY = ";
    cout << m1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << m1.upper_bound(5)->second << endl;

    return 0;
}