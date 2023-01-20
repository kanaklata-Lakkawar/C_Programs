#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf(" 1st Number=12\n");
    printf(" 2nd Number=25\n");
    printf(" 3rd Number=52\n");
    if(a>b)
    {
        if(a>c)
            printf(" 1st Number is greatest amongst three");
    }
    if(b>a)
    {
        if(b>c)
             printf(" 2nd Number is greatest amongst three");
    }
    if(c>a)
    {
        if(c>b)
            printf(" 3rd Number is greatest amongst three");
    }
    return 0;
}
