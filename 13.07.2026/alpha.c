#include<stdio.h>
#include<ctype.h>

void main()
{
    char a;
    printf("enter a character:");
    scanf("%c",&a);

    if(isalpha(a))
    {
        printf("It is character");
    }
    else
    {
        printf("not a character");
    }
}
