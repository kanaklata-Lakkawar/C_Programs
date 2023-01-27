#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,sum=0;
    while(i<8)
    {
    printf(" %d\n",i);
    sum=sum+i;

    i++;
    }
printf(" The Sum of 10 Natural Numbers upto 7 terms : %d\n",sum);
    return 0;
}
