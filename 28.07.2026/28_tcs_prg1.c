#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int fact=n;
    int k=n-1;
    while(k>0)
    {
     int sum=0;
     for(int i=0;i<fact;i++)
     {
        sum=sum+k;
     }
    k=k-1;
    fact=sum;

    }
    printf("factorial is %d",fact);
}
