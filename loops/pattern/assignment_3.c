// C program to make such a pattern like right angle triangle with a number which will repeat a number in a row //


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",i);
        }
      printf("\n");
    }

    return 0;
}
