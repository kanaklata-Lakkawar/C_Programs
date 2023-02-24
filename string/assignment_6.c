
////

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vow=0,cons=0;
    char ch[50]=" Welcome to w3resource.com";
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u')
        {
                vow++;
        }
        else if((ch[i]>='a' && ch[i]<='z')|| (ch[i]>='A' && ch[i]>='Z'))
        {
            cons++;
        }

    }
printf("vowels==%d",vow);
printf("consom==%d",cons);
    return 0;
}
