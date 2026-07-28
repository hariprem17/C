//good number

#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int m=n;
    int sum=0,rem;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(m%sum==0)
    {
        printf("good number");
    }
    else
    {
        printf("bad number");
    }
}
