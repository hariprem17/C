#include<stdio.h>

void main()
{
    int a,fact=1;
    printf("enter a number:");
    scanf("%d",&a);

    for(int i=a;i>0;i--)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
