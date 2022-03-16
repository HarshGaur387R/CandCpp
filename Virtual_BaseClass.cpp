#include <iostream>
#include <iomanip>
using namespace std;


//Base Class////////////
class student{

protected : 
int RollNumber;

public:
void set_RollNumber(int roll){

RollNumber = roll;

}

void display_R(){
    cout<<"The roll number is :"<<RollNumber<<endl;
}
};

//1 First Virtual Drived Class///////////////// 
class subject : virtual public student{

protected : 
float maths , science;

public :
void set_Marks(float m,float sc){
    maths = m;
    science = sc;
}

void display_M(){
    cout<<"Maths marks is : "<<maths<<endl
        <<"Scence marks is : "<<science<<endl;
}
};

//2 Second Virtual Drived Class/////////////////
class sports : virtual public student{

protected :
float score;

public :
void set_score(float scor){
    score = scor;
}

void display_score(){
    cout<<"Sports marks is :"<<score<<endl;
}
};

//Drived Class From Subject and Sports/////////////
class result : public subject,public sports{

public:
float total;
void display_Result(){
    display_R();
    display_M();
    display_score();
    total = (maths+science+score);
    cout<<fixed<<setprecision(2);
    cout<<"The total percentage is :"<<(total/300.0)*100<<endl;
}

};

int main()
{
    
    result ob;
    ob.set_RollNumber(234);
    ob.set_Marks(67.77,66.85);
    ob.set_score(70.77);
    ob.display_Result();
     return 0;
}