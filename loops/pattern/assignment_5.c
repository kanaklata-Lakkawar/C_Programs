// C program to make such a pattern like a pyramid with numbers increased by 1//


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,num=1;
    for (i=4;i>=1;i--)
    {
    for(j=0;j<=i;j++)
    {
        printf(" ");
    }
    for(k=4;k>=i;k--)
    {
        printf(" %d",num++);
    }
    printf("\n");
    }



    return 0;
}
