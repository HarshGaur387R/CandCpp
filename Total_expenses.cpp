#include <iostream>
#include <iomanip>
using namespace std;

void func()
{
     int T;
     float arr[1000];

     cin >> T;

     for (int i = 0; i < T; i++)
     {
          cin >> arr[i];

          if (arr[i] > 1000)
          {
               arr[i] = (arr[i] - (arr[i] / 10));
               cout << fixed << setprecision(2);
               cout << arr[i] << endl;
          }

          else
          {
               cout << fixed << setprecision(2);
               cout << arr[i] << endl;
          }
     }
}

int main()
{
     func();
     return 0;
}

