#include <iostream>

#include <vector>

using namespace std;

int main()

{

    vector<int> vec = {2, 2, 2, 5, 5, 6, 6, 7, 7, 8};

    vector<int>::iterator lo;

    lo = lower_bound(vec.begin(), vec.end(), 4);

    cout << (lo - vec.begin()) << " " << *lo;
    

    return 0;
}