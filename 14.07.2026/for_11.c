#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum=0,rem;

    for(;n>0;)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;

    }
    printf("%d",sum);
}
