//C program to print 10 numbers from keyboard and find their sum and average//


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,sum=0;
    float avg=0;
    while(i<11)
    {
    printf("%d\n",i);
    i++;
    sum+=i;
    avg=sum/10.0;
    }
    printf(" The sum of Numbers is : %d\n",sum);
    printf(" The Average is : %f\n",avg);
    return 0;
}
