#include<stdio.h>

void main()
{
    float n;
    printf("enter a number:");
    scanf("%f",&n);


    if(n>99 && n<=999)
    {
        printf("its 3 digit");
    }
    else
    {
        printf("Its not 3 digit number");
    }
}
