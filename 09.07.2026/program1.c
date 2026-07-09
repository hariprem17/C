#include<stdio.h>

void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int b=a%23==0?43:29;
    printf("Output %d",b);

}
