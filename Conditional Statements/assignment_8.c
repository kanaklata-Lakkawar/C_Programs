#include <stdio.h>
#include <stdlib.h>

int main()
{
    int phy,chem,maths,total;
    printf("Enter Physics Marks : ");
    scanf("%d",&phy);
    printf("Enter Chemistry Marks : ");
    scanf("%d",&chem);
    printf("Enter Mathematics Marks : ");
    scanf("%d",&maths);
    total=maths+phy+chem;
    if(total>=180)
    {
      if (maths>=65 && phy>=55 && chem>=50)
        printf("The candidate is eligible for admission");
    }

    else if(maths>=65 && total>=140)
    {
        printf("\nThe candidate is eligible for admission");
    }
    else
        {
           printf("\nThe candidate is not eligible for admission");
        }
    return 0;
}
