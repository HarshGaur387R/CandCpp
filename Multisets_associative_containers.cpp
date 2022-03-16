#include <iostream>
#include <set>
using namespace std;

/*
Multisets are a type of associative containers similar to set,
with an exception that multiple elements can have same values.
*/

void show(multiset <int, greater<int>> ms1){

    for(multiset <int, greater<int>> :: iterator it = ms1.begin(); it != ms1.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{

    multiset<int, greater<int>> ms1;

    ms1.insert(40);
    ms1.insert(39);
    ms1.insert(80);
    ms1.insert(70);
    ms1.insert(60);

    ms1.insert(60);

    show(ms1);

    cout<<"max_size :"<<ms1.max_size();

    return 0;
}