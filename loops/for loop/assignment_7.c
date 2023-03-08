
//   //

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;
    for(i=1;i<20;i+=2)
    {
        if(i%2!=0)
    printf("%d\n",i);

    sum+=i;

    }
    printf("The Sum of odd Natural Numbers upto 10 terms = %d\n",sum);
    return 0;
}
