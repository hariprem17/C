//without return with arg
#include<stdio.h>

void add(int,int);
void main()
{
    int a=10;
    int b=20;
    add(a,b);
}
void add(int x,int y)
{
    int sum=x+y;

    printf("%d",sum);
}
