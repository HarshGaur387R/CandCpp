#include <stdio.h>
#include <stdbool.h>
#include <errno.h>

#define try bool __HadError=false;
#define catch(x) ExitJmp:if(__HadError)
#define throw(x) {__HadError=true;goto ExitJmp;}

int main()
{
    // int var2 = 2147483647;

    // printf("%i ,%li \n", var2,sizeof(var2));

    // int var3 = -2147483647;

    // printf("%i ,%li \n", var3,sizeof(var3));

    __int8_t var1 = 127; // Equals to "signed char var4 = 127";
    __int16_t var2 =  32699; // Equals to ""
    __int32_t var3 = 2147483647; // Equals to "signed int var4 = 2147483647";
    __int64_t var4 =  9219999999999999999; // Equals to "signed long var5 = 9219999999999999999"

    printf("%i ,%li\n", var1,sizeof(var1));
    printf("%i ,%li\n", var2,sizeof(var2));
    printf("%i ,%li\n", var3,sizeof(var3));
    printf("%li ,%li\n", var4,sizeof(var4));



    return 0;
}