#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a=1;

    if(n==1||n==0)
    {
     a=0;

    }

    for(int i=2;i<n;i++)
    {


        if(n%i==0)
        {
            a=0;
            break;
        }
    }
    if(a==1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
}
