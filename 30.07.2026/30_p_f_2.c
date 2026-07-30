#include<stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a=10;
    int b=20;

    int result=swap(&a,&b);

    printf("%d,%d",a,b);
}
