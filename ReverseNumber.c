#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reverse=0;
    int n;
    printf("Enter any value :");
    scanf("%d",&n);
    while(n!=0)
    {
        reverse=reverse*10+n%10;//1 //1 2
        n=n/10;//32  3
    }
    printf("Reverse = %d",reverse);
    return 0;
}
/*321
32  R- 1   10
21   */
