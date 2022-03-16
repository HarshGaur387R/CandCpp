#include <iostream>
#include <deque>

using namespace std;

void show(deque <int> d)
{
    cout<<"You can insert elements from front and back in deque :"<<endl;
    for(int i=0; i < d.size(); i++){
        cout<<d.at(i)<<" ";
    }
    cout<<"\n_____________________________________\n";
}

int main()
{

    deque<int> dq;

    for (int i = 0; i <= 5; i++)
    {
        dq.push_back(i + 10); 
        dq.push_front(i + 5);
        
    }

    show(dq);

    cout<<"Largest size of deque: ";
    cout<<dq.max_size()<<"\n_____________________________________\n";

    dq.pop_back();
    dq.pop_front();

    show(dq);
    return 0;
}