#include<stdio.h>
#include<string.h>

void main()
{
    char a[]="how";
    char b[]="are";
    char c[]="you";

    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' ||a[i]=='e'||a[i]=='o' ||a[i]=='i' ||a[i]=='u')
        {
            a[i]='%';
        }
    }

    for(int i=0;i<b[i]!='\0';i++)
    {
        if(b[i]!='a' && b[i]!='e'&& b[i]!='o' &&b[i]!='i' &&b[i]!='u')
        {
            b[i]='#';
        }
    }

    for(int i=0;c[i]!='\0';i++)
    {
        c[i]=toupper(c[i]);
    }

    printf("%s%s%s",a,b,c);

    printf("%s",strcat(a,b,c));

}
