#include <stdio.h>
#include <stdlib.h>

int main()
{
  float phy,chem,compApp,total,percentage;
    printf("Enter Physics Marks = ");
    scanf("%f",&phy);
    printf("Enter Chemistry Marks = ");
     scanf("%f",&chem);
    printf("Enter Maths Marks = ");
     scanf("%f",&compApp);
    total=phy+chem+compApp;
    printf("Roll No : 784\n");
    printf("Name of Student : James\n");
    printf("Total = %f",total);
    percentage=(total/300)*100;
    printf("Percentage = %f\n",percentage);
  
    if(percentage>=70 && percentage<=100)
    printf("Division = First\n");
    if(percentage>=50 && percentage<=70)
    printf("Division = Second\n");
    else
            printf("Division = Third\n");
    return 0;
}
