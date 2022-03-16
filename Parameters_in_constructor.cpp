#include <iostream>
using namespace std;

class complex
{
private:
    int a,b;
public:
    complex(int,int);

    void print(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }

       
};

complex :: complex(int x,int y){
    a = x;
    b = y;
}


int main(){

complex p1(2,3);
p1.print();

complex p2 = complex(4,5);
p2.print();


return 0;
}