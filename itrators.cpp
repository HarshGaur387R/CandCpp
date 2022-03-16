#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void show(vector<int> vec)
{
    for (auto &x : vec)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> vec = {1, 3, 2, 4, 5};
    vector<int> vec1 = {30,89,20};
    cout << "without itrator :" << endl;
    show(vec);

    cout << "with itrator :" << endl;
    vector<int>::iterator it = vec.begin();
    for (; it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    it = vec.begin();

    cout << endl;

    advance(it, 2);

    cout << "After advancing :" << *it << endl;
    
    
    
    it = vec1.begin();
    advance(it, 2);

    copy(vec.begin(),vec.end(),inserter(vec1,it));


    cout<<"After inserting :";
    show(vec1);



    return 0;
}