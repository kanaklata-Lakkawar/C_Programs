#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Number;
    printf(" Enter any Number");
    scanf(" %d",&Number);
    if(Number%2==0)
        printf(" The Number is Even");
    else
        printf(" The Number is Odd");

    return 0;
}
