#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2018;

    if (a%4==0)
    {
        if(a%100==0)
           printf("%d is a leap year\n",a);
        else
        printf("%d is not is a leap year \n",a);
    }

    else
        printf("%d is not is a leap year \n",a);
    return 0;
}
