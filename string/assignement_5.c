
//    //

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[50]="This is string mkoji koko";
    int count=1;
    //print("Enter any string");
    //scanf("%s",sentence)
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
