#include<stdio.h>
#include<string.h>

void main()
{
    char a[30 ]="hari";
    char b[]="prem";
    //printf("%s",strcat(a,b));
    int len_a=strlen(a);
    int len_b=strlen(b);

    for(int i=0;i<=len_b;i++)
    {
        a[len_a+i]=b[i];
    }
    printf("%s",a);
}
