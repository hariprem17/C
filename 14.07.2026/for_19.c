#include<stdio.h>

void main()
{
    int n,rem,rev=0;
    printf("enter a number:");
    scanf("%d",&n);
    int a=n;
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }

    for(int i=0;i<count;i++)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("%d",rev);
}
