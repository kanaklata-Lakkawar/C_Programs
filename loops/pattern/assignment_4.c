// C program to make such a pattern like right angle triangle with numbers increased by 1//


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,x=0;
    for(i=1;i<6;i++)
    {
        for(j=1;j<i;j++)
        {
        printf(" %d",x++);
        }
        printf("\n");

    }
    return 0;
}
