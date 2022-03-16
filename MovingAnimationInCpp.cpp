#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{

    int i = 0, flag = 0, move = 40;
    char op;
    while (op != 'q')
    {
        for (int j = 0; j < 80; j++)
        {
            if (j == move)
            {
                flag = 1;
            }
            if (flag == 0)
            {
                cout << " ";
            }
            else if (flag == 1)
            {
                cout << "#";
                flag = 0;
            }
        }

        system("stty raw");

        op = getchar();

        if (op == 'a')
        {
            --move;
        }
        else if (op == 'd')
        {
            ++move;
        }

        if (move > 80)
        {
            move = 0;
        }
        else if (move < 0)
        {
            move = 80;
        }

        system("clear");

        system("stty cooked");
    }

    return 0;
}