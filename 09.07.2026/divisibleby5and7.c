#include<stdio.h>

void main()
{
    int n,a;
    printf("enter a number:");
    scanf("%d",&n);

    a=(n%5==0&&n%7==0)?printf("multiple of both 5&7"):(n%5==0)?printf("multiple of 5"):(n%7==0)?printf("multiple of 7"):printf("not multiple of 5 and 7");

}
