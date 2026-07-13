#include<stdio.h>
#include<ctype.h>

void main()
{
    char a;
    printf("enter :");
    scanf("%c",&a);

    if(isalpha(a))
    {
        printf("it is character");
    }
    else if(isdigit(a))
    {
        printf("it is digit");

    }
    else
    {
        printf("it is special character");
    }
}
