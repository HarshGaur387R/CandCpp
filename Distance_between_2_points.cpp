#include <iostream>
#include <cmath>
using namespace std;

class calc{

private :

float a,b;

public :

friend float func(calc,calc);

calc(float, float);

};

calc :: calc(float v1,float v2){
    a = v1;
    b = v2;
}

float func(calc o1, calc o2){
    float total=0;
    total = ((o2.a-o1.a)*(o2.b-o1.a) + (o2.b-o1.b)*(o2.b-o1.b));
    total = sqrt(total);
    return total;  
}

int main()
{
    float x1,y1,x2,y2;
    cout<<"NOTE : Space between both points\n";
    cout<<"Enter Point 1 and Point 2 :";
    cin>>x1>>y1;
    calc p1(x1,y1);
    cout<<"Enter Point 1 and Point 2 :";
    cin>>x2>>y2;
    calc p2(x2,y2);
    
    cout<<"\nThe Total Distance is :"<<func(p1,p2);
    

    return 0;
}