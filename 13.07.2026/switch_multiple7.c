#include<stdio.h>

void main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);

    switch(a%7)
    {
    case 0:
        printf("%d Multiple of 7",a);
        break;

    default:
        printf("%d Not multiple of 7",a);
    }
}
