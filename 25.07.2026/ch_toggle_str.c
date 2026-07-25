//Toggle the case of each character.

#include<stdio.h>
#include<string.h>

void main()
{
    char a[50];
    printf("enter a string:");
    gets(a);

    int len=strlen(a);

    for(int i=0;i<len;i++)
    {
        if(a[i]>=65 && a[i]<=91)
        {
            a[i]=tolower(a[i]);
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i]=toupper(a[i]);
        }
    }
    printf("%s",a);
}
