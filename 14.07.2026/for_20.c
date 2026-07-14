#include<stdio.h>

void main()
{
    int n,m,mul=1,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    printf("enter a exponential range:");
    scanf("%d",&m);

    for(int i=1;i<=m;i++)
    {
        mul=mul*n;
        sum=sum+mul;
    }
    printf("%d",sum+1);
}
