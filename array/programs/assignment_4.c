//    //


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a[3]={1,5,1};

    if(a[0]!=a[1] && a[0]!=a[2])
    {
        printf("The unique element found in the array is : %d\n",a[0]);
    }
     if(a[1]!=a[0] && a[1]!=a[2])
       {
            printf("The unique element found in the array is : %d\n",a[1]);
       }
       if(a[2]!=a[0] && a[2]!=a[1])
          {
                printf("The unique element found in the array is : %d\n",a[2]);
          }


    return 0;
}
