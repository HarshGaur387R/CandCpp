#include <iostream>
#include <cstdlib>
using namespace std;

void quadrilateral_func()
{

    int **p;   //Pointer for 2D array
    int t = 0, total = 0;

    cin >> t;

    p = (int **)malloc(t * sizeof(int **)); //Allocating given row.

    for (int i = 0; i < t; i++) //Allocating given 4 columns in each row.
    {
        p[i] = (int *)malloc(4 * sizeof(int));
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> p[i][j];
        }
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            total += p[i][j];
        }

        if (total == 360)
        {
            cout << "YES" << endl;
            total = 0;
        }

        else
        {

            cout << "NO" << endl;
            total = 0;
        }
    }
}

int main()
{
   
   quadrilateral_func();
   
    return 0;
}