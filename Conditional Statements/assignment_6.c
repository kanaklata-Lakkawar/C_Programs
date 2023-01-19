#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    printf(" Enter value of m ");
    scanf("%d",&m);
    if(m>0)
        printf(" n=1");
    if(m==0)
        printf(" n=0");
    if(m<0)
        printf(" n=-1");

    else
        printf(" n is not present");
    return 0;
}
