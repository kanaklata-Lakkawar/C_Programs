#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf(" Enter any year\n");
    scanf(" %d",&year);
    if (year%4==0 && year%100!=0 || year%400==0)
    {
     printf(" %d year is Leap Year",year);
    }
       
    else
    printf(" %d year is not a Leap Year",year);
    return 0;
}
