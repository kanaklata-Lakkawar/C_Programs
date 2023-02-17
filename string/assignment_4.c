// Write C program to print individual characters of string in reverse order //


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[15]="w3resource.com";
    printf("The characters of the string are :");
    int l=sizeof c/sizeof c[0];
   
    for(int i=0;i<l;i++)
    {
        printf(" %c",c[i]);
    }
    printf("\n");
     printf("The characters of the string in reverse order are :");
   for(int i=l-1;i>=0;i--)//n/2
    {
      printf(" %c",c[i]);
    }

    return 0;
}
