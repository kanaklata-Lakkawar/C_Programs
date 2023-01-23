#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter any Key : ");
    scanf("%c",&ch);
     if(ch>='a' && ch<='z')
        printf("%c is Alphabet",ch);
    
     else if(ch>='A' && ch<='Z')
        printf("%c is Alphabet",ch);
           else if(ch>=48 && ch<=57)
            printf("%c is Digit",ch);
               else
                printf("%c is Special Character",ch);
    return 0;
}
