#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    if(n%11==0 && n%32==0)
    {
        printf("Its divisible by both 11 and 32");
    }
    else
    {
        printf("Not divisible by both 11 and 32");
    }
}
