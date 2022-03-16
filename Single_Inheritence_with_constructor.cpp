#include <iostream>
using namespace std;


//Base Class///////////////////

class programmer {

public :

string name;
int id;
int sallary;

programmer(){} //This is default constructor its necessary to making it if you have constructor in your base class

programmer(string n, int i, int s){
    name = n;
    id = i;
    sallary = s;
}
};


//Drived Class///////////////

class devloper : private programmer { //All the public members of base class becomes private in this drived class

string catg;

public :

devloper(string n,string c,int i, int s){

    name = n;
    catg = c;
    id = i;
    sallary = s;
}

void func(){
    cout<<"\nThe name of devloper is :"<<name<<endl;
    cout<<"The catg. of devloper is :"<<catg<<endl;
    cout<<"The id of devloper is :"<<id<<endl;
    cout<<"The sallary of devloper is :"<<sallary<<endl;
}

};


int main()
{

programmer p1("Harsh Gaur",233,10000);

    cout<<"The name of programmer is :"<<p1.name<<endl;
    cout<<"The id of programmer is :"<<p1.id<<endl;
    cout<<"The sallary of programmer is :"<<p1.sallary<<endl;

devloper d1("Amish Devgan","Web devloper",234,12000);

d1.func();

return 0;
}