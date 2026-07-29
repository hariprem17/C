#include<stdio.h>

int add();
void main()
{
    int sum=add();
    printf("%d",sum);

}

int add()
{
    int a=10,b=20;
    int sum=a+b;

    return sum;
}
