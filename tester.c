#include <stdio.h>
#include <stdlib.h>

int p[100000];
int z;
int f(int n)
{

    if (n == 1 || n == 0)
        return n;

    z = f(n - 1) + f(n - 2) + n;
    return z;
}

int main()
{

    // int x = f(10);
    printf("%d\n", 7 / 2);

    return 0;
}