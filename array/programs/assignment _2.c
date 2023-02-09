#include <stdio.h>
#include <stdlib.h>

int main()
{

//int a[3]={2,5,7};
int n=3;
int a[n];
     printf("Enter size of an array :");
    scanf("%d",&n);
int l=sizeof a/sizeof a[0];
for(int i=0;i<l;i++)
{
    printf("Enter number of an array :");
    scanf("%d",&a[i]);
}
printf("the values stored in array are :");
for( int i=0;i<l;i++)

    {
    printf("%d\t",a[i]);
    }
    printf("\n");

    printf("the values stored in array in reverse are :");
 for(int i=l-1;i>=0;i--)//n/2
    {
      printf("%d\t",a[i]);
    }

return 0;
}
