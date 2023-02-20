
//  C program to to count the total number of words in a string  //

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[50]="This is string";
    int count=1;
    
    
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' ')
        {
            count++;
        }

    }
    printf("%d",count);
    return 0;
}
