#include <iostream>
using namespace std;

void marksfunc(float sub1, float sub2, float sub3){

  float average;
  average = (sub1 + sub2 + sub3)/3;

  if((average > 90) && (average <= 100)){
        cout<<"A";
  }

  else if((average > 80) && (average <= 90)){
      cout<<"B";
  }

  else if((average > 70) && (average <= 80)){
      cout<<"C";
  }

   else if((average > 60) && (average <= 70)){
      cout<<"D";
  }

   else if(average <= 60){
      cout<<"F";
  }

}

int main()
{

      
   float sub1,sub2,sub3;

   cin>>sub1>>sub2>>sub3;
  
  marksfunc(sub1,sub2,sub3);


    return 0;
}