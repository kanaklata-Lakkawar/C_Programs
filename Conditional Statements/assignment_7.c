#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf(" Enter 1st Number=\n");
    scanf("%d",&a);
     printf(" Enter 2nd Number=\n");
    scanf("%d",&b);
     printf(" Enter 3rd Number=\n");
    scanf("%d",&c);
  
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
