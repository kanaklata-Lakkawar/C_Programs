#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf(" Enter Your age ");
    scanf("%d",&age);
    if(age>=18)
    {
    printf(" Congratulations!! you are Eligilble for casting your vote");
    }
        
    else
    {
    printf(" Sorry you are not eligible for vote");
    }
       
    return 0;
}
