#include <iostream>
#include <cstdio>
using namespace std;


class devloper{

//int id; <== (NOTE: You can not use the private members of base class in a drived class.)
public :

string name;
string work;
int id;
int salary;

};

//syntax of drived class (Type : single Inheritence)

class programmer : public devloper{ // <== If we write Private instead of Public so all the public members of base class becomes private in drived class
                                    // NOTE: By default the visbility of drived class is private
public:
string experience; // <== We can add some extra features in drived class

}; // <== Now we have all the same members like base class (devloper class). 


int main()
{

devloper d[2];
programmer p[2];


cout<<"____DEVLOPER EMPLOYEE DETAILS___\n"<<endl;
for (int i = 0; i < 2; i++)
{

cout<<"Enter the dev"<<i+1<<" name :";
getline(cin,d[i].name);

cout<<"Enter the dev"<<i+1<<" work :";
getline(cin,d[i].work);

cout<<"Enter the dev"<<i+1<<" id :";
cin>>d[i].id;

cout<<"Enter the dev"<<i+1<<" salary :";
cin>>d[i].salary;
getchar();
}
cout<<endl;

cout<<"\n____PROGRAMMERS EMPLOYEE DETAILS___\n"<<endl;

for (int i = 0; i < 2; i++)
{

cout<<"Enter the prog"<<i+1<<" name :";
getline(cin,p[i].name);

cout<<"Enter the prog"<<i+1<<" work :";
getline(cin,p[i].work);

cout<<"Enter the prog"<<i+1<<" id :";
cin>>p[i].id;

cout<<"Enter the prog"<<i+1<<" salary :";
cin>>p[i].salary;
getchar();
cout<<"Enter the prog"<<i+1<<" experience :";
getline(cin,p[i].experience);

}
cout<<endl;


cout<<"\n//___HARSH ACADEMY EMPLOYEES___\\\\"""<<endl;

cout<<"\n<<==DEVELOPERS===========>>\n";
for (int i = 0; i < 2; i++)
{
    cout<<"The name of dev"<<i+1<<" is :"<<d[i].name<<endl;
    cout<<"The work of dev"<<i+1<<" is :"<<d[i].work<<endl;
    cout<<"The ID of dev"<<i+1<<" is :"<<d[i].id<<endl;
    cout<<"The sallary of dev"<<i+1<<" is :"<<d[i].salary<<endl;
    cout<<endl;
}

cout<<"\n<<==PROGRAMMERS===========>>\n";
for (int i = 0; i < 2; i++)
{
    cout<<"The name of prog"<<i+1<<" is :"<<p[i].name<<endl;
    cout<<"The work of prog"<<i+1<<" is :"<<p[i].work<<endl;
    cout<<"The ID of prog"<<i+1<<" is :"<<p[i].id<<endl;
    cout<<"The sallary of prog"<<i+1<<" is :"<<p[i].salary<<endl;
    cout<<"The experience of prog"<<i+1<<" is :"<<p[i].experience<<endl;
    cout<<endl;
}


return 0;
}