//Find the last occurrence of a character.

#include<stdio.h>
#include<string.h>

void main()
{
    char a[50];
    char f;
    printf("enter a string:");
    gets(a);
    int len=strlen(a);
    printf("enter a character to find last occurance:");
    scanf(" %c",&f);
    int found=0;

    for(int i=len-1;i>=0;i--)
    {
        if(a[i]==f)
        {
            printf("last occurace of %c is %d",f,i);
            found=1;
            break;
        }
    }
    if(found==0)
    {
    printf("character not found");
    }
}

