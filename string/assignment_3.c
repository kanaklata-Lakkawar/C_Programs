//  C program to separate the individual characters from a string  //

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[15]="w3resource.com";
    printf("The characters of the string are :");
    for(int i=0;i<16;i++)
    {
        printf(" %c",c[i]);
    }
    return 0;
}
