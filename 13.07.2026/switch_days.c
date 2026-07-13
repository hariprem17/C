#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);

    switch(a)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("wednesday");
        break;

    case 4:
        printf("thursday");
        break;

    case 5:
        printf("friday");
        break;

    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("sunday");
        break;
    }
}
