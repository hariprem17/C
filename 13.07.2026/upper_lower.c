#include<stdio.h>
#include<ctype.h>

void main()
{
    char a;
    printf("enter a character:");
    scanf("%c",&a);

    if(isupper(a))
    {
        printf("it is uppercase");
    }
    else
    {
        printf("it is lower");
    }
}
