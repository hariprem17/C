#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    printf("enter a string:");
    gets(a);
    int len=strlen(a);
    int flag=1;

    for(int i=0;i<len/2;i++)
    {
        if(a[i]!=a[len-1-i])
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        printf("string is plaindrome");
    }
    else
    {
        printf("string is not palindrome");
    }

}
