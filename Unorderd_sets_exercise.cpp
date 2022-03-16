#include <iostream>
#include <unordered_set>
#include <array>
#include <algorithm>
using namespace std;

void exercise()
{

    array<int, 12> arr = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};


    unordered_set<int> us1;
    unordered_set<int> duplicate;

    for (int i = 0; i<12; i++)
    {
        if(us1.find(arr[i]) == us1.end()){
            us1.insert(arr[i]);
        }
        else{
            duplicate.insert(arr[i]);
        }
    }

    for(unordered_set<int> :: iterator it = duplicate.begin(); it!=duplicate.end(); it++){
        cout<<*it<<" ";
    }
}

int main()
{

    exercise();

    return 0;
}