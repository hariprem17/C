#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    printf("enter a string:");
    gets(a);
    int len=strlen(a);
    char temp;
    for(int i=0;i<len/2;i++)
    {
        temp=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=temp;
    }
    printf("%s",a);

}
