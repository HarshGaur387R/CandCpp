#include <iostream>
#include <map>
using namespace std;

/*
Maps are associative containers that store elements in a mapped fashion.
Each element has a key value and a mapped value.
No two mapped values can have same key values.
*/

void show(map<int, int> m1)
{

    cout << "KEY\tELEMENTS\n";
    for (map<int, int>::iterator it = m1.begin(); it != m1.end(); ++it)
    {
        cout << it->first << "\t" << it->second << endl;
    }
    cout << endl;
}

int main()
{

    map<int, int> m1;

    m1.insert(pair<int, int>(1, 20));
    m1.insert(pair<int, int>(2, 30));
    m1.insert(pair<int, int>(3, 40));
    m1.insert(pair<int, int>(5, 60));
    m1.insert(pair<int, int>(4, 50));

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