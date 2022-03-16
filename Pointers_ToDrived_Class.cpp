#include <iostream>
using namespace std;

class base_class{

protected:
int base_class_Var;
public:
void display(int a){
    base_class_Var = a;
    cout<<"The base class variable in baseClass is : "<<base_class_Var<<endl;
}

};

class drived_class : public base_class{

public: 
int drived_class_Var;

void Ddisplay(int a){
    drived_class_Var = a;
    cout<<"The drived class variable in drivedClass is : "<<drived_class_Var<<endl;
    cout<<"The base class variable in drived class is : "<<base_class_Var<<endl;
}

};

int main()
{

 base_class *Bop; 
 base_class  Bo;

 drived_class * Dop;
 drived_class Do; 

 Bop = &Do;
 Bop->display(40); //You can't use drived class memebers with base class pointer who pointed at drived
                   //class object, you can use only base class inharited members.  

 cout<<endl;
 
 Dop = &Do;         
 Dop->Ddisplay(29); //You can use drived class members with drived object pointer who pointed at drived
                    //class object, and you can also use base class inharited members.

 //Dop = &Bo;    //You can't point at base class object using drived class pointer.

 
   
    return 0;
}