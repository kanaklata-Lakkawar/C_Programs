


#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch1[20]=" this is string one";
   char ch2[20]=" this is string two";
   printf("\n Before concatination :\n%s",ch1);
   printf("\n%s",ch2);
    strcat(ch1,ch2);
    printf("\n After Concatination :\n%s",ch1);
    return 0;
}
