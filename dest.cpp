#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int gap = 3;
    int num = 0;
    int temp = 1;
    cin >> num;
    int dec = num;
    int innerValue = 0;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j == dec - 1)
            {
                cout << temp << " ";
                dec--;
                innerValue = temp;
            }
            else if (j < dec)
            {
                cout << "  ";
            }
            else if (j > dec)
            {

                cout << innerValue + gap << " ";
                innerValue = innerValue + gap;
                --gap;
            }
        }

        cout << endl;
        temp++;
        gap = 3;
    }

    return 0;
}

/*
- - - 1
- - 2 5
- 3 6 8
4 7 9 10


*/
