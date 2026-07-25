//Find the first occurrence of a character.

#include<stdio.h>
#include<string.h>

void main()
{
    char a[50];
    char f;
    printf("enter a string:");
    gets(a);
    int len=strlen(a);
    printf("enter a character to find first occurance:");
    scanf("%c",&f);

    for(int i=0;i<len;i++)
    {
        if(a[i]==f)
        {
            printf("first occurace of %c is %d",f,i);
            break;
        }
    }
}
