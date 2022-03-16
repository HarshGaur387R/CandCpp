#include <iostream>
using namespace std;

int count = 0;

class Data
{
private:
    
public:
     Data();
    ~Data();
};

Data::Data()
{
count++;
cout<<"("<<count<<")Constructor is called\n";
}

Data::~Data()
{
    cout<<"("<<count<<")Destructor is called\n";
    count--;
}



int main()
{


Data ob1;

{
Data ob2;
}




return 0;
}