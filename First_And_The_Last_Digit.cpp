#include <iostream>
using namespace std;

class FATLD{

public:
int arr[1000];
int firstNum[1000];
int lastNum[1000];
int run;
int temp;

FATLD(){
  
  cin>>run;

  for (int i = 0; i < run; i++)
  {
       cin>>arr[i];
  }

 for (int i = 0; i < run; i++)
 {
      lastNum[i] = arr[i]%10;
      temp = arr[i];
      while (temp != 0)
      {
         firstNum[i] = temp;
         temp = temp/10; 
      }
   cout<<firstNum[i]+lastNum[i]<<endl;     
 }

}

};

int main()
{
    
FATLD ob;

 return 0;
}


