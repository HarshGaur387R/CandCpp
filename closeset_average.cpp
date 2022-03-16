#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{

int average,run,real;
float total;
int *arr;

cin>>run;

arr =  (int*) malloc(run);

for(int i = 0; i<run; i++){
    cin>>arr[i];
}

for(int i = 0; i<run; i++){
    total = total + arr[i];
}

total = total/run;

real = (int)total;

if (total-real > .5)
{
    real = real + 1;
    cout<<real;
    exit(0);
}

else if (total-real <= .5)
{
    cout<<real;
    exit(0);
}
     
  return 0;
}