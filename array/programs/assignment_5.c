// C program to find the maximum and minimum element in an array  //



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("enter any value :");
        scanf(" %d",&a[i]);
    }

    if(a[0]>a[1] && a[0]>a[2])
    {
        printf("Maximum element is : %d\n",a[0]);
    }
     if(a[1]>a[0] && a[1]>a[2])
     {
            printf("Maximum element is : %d\n",a[1]);
     }
       if(a[2]>a[0] && a[2]>a[1])
          {
                printf("Maximum element is : %d\n",a[2]);
          }

          if(a[0]<a[1] && a[0]<a[2])
    {
        printf("Minimum element is : %d\n",a[0]);
    }
     if(a[1]<a[0] && a[1]<a[2])
       {
            printf("Minimum element is : %d\n",a[1]);
       }
       if(a[2]<a[0] && a[2]<a[1])
          {
                printf("Minimum element is : %d\n",a[2]);
          }


    return 0;
}
