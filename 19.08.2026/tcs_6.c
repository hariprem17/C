#include<stdio.h>
int prime(int x)
{
    int found=0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}
void main()
{
    int a;

    start:
    printf("enter a number:");
    scanf("%d",&a);

    if(a<0)
    {
        printf("number is negative\n");
        goto start;
    }

    prime(a);

}
