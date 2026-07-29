#include<stdio.h>

int add(int,int);

void main()
{
    int a=10,b=20;
    int sum=add(a,b);
    printf("%d",sum);
}

int add(int x,int y)
{
    return x+y;
}
