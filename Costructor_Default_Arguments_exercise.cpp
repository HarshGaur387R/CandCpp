#include <iostream>
using namespace std;

class Data{

string name;
string productName;
string date;
string Time;
float price;

public:

Data(float storeServicePrice=50){
float total=0;

cout<<"\n________________________________";
cout<<"\n/////RAFEAL STORE SERVICE///////"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
cout<<"Enter The Name :";
getline(cin,name);
cout<<"Enter THe Product Name :";
getline(cin,productName);
cout<<"Enter The Date :";
getline(cin,date);
cout<<"Enter The Time :";
getline(cin,Time);
cout<<"Enter The Product Price :";
cin>>price;

cout<<"\n"<<endl;   
cout<<"  ____________________________________  "<<endl;
cout<<"||          CUSTOMER  DETAILS         ||"<<endl;
cout<<"||------------------------------------||"<<endl;
cout<<"||         RAFEAL STORE SERVICE       ||"<<endl;
cout<<"||                                    ||"<<endl;
cout<<"|| NAME : ";
cout<<name<<endl;
cout<<"|| PRODUCT NAME : ";
cout<<productName<<endl;
cout<<"|| DATE : ";
cout<<date<<endl;
cout<<"|| TIME : ";
cout<<Time<<endl;
cout<<"|| PRICE OF PROD. : $";
cout<<price<<endl;
cout<<"|| SERVICE CHARGE : $";
cout<<storeServicePrice<<endl;
cout<<"|| TOTAL PRICE : $";
cout<<price+storeServicePrice<<endl;
cout<<"||                                    ||"<<endl;
cout<<"||------------------------------------||"<<endl;
cout<<"||         THANKS FOR VISTING         ||"<<endl;
cout<<"||____________________________________||"<<endl;
}

};

int main()
{
    
    Data o1;


    return 0;
}