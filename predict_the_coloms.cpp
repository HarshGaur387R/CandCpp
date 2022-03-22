#include <iostream>
#include <vector>
using namespace std;

int coloumn_of_highest_zeros(vector<vector<int>> arr, int N)
{
    int highNum = 0;
    int column = 0;

    for (int i = 0; i < N; i++)
    {
        int temp = 0;
        for (int j = 0; j < N; j++)
        {
            if (arr[j][i] == 0)
            {
                temp++;
            }
        }
        if (temp > highNum)
        {
            highNum = temp;
            column = i;
        }
    }

    return column;
}

int main()
{

    vector<vector<int>> ob(3, vector<int>(3));
    ob[0][0] = 1;
    ob[0][1] = 1;
    ob[0][2] = 0;

    ob[1][0] = 1;
    ob[1][1] = 1;
    ob[1][2] = 0;

    ob[2][0] = 1;
    ob[2][1] = 1;
    ob[2][2] = 0;

    cout << coloumn_of_highest_zeros(ob,3);

    return 0;
}

/*

{1, 1, 0}
{1, 1, 0}
{1, 1, 0}

*/