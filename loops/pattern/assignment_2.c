// C program to print pattern like right angle triangle with numbers//


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
