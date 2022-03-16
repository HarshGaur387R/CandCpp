#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

int main()
{
    
    int i = 0;
    while (i < 50)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout<<"==>";
        sleep(1);
        system("clear");
        cout<<endl;
        i++;

    }

    return 0;
}