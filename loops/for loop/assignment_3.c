//C program to print 10 numbers frim keyboard and find their average and sum //


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,sum=0;
    float avg=0;
    for(i=0;i<11;i++)
    {
    printf("%d\n",i);
   
    sum+=i;
         printf("The sum of Numbers is : %d\n",sum);
    avg=sum/10.0;
        printf("The Average is : %f\n",avg);
    }
   
    
    return 0;
}
