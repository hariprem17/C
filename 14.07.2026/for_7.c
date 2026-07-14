#include<stdio.h>

void main()
{
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
