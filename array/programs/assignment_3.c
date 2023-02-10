//   //


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;
    int a[3]={2,5,8};
    for(i=0;i<3;i++)
    {
        printf("%d\t",a[i]);
        sum+=a[i];
    }

    printf("\n sum = %d",sum);
    return 0;
}
