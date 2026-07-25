#include<stdio.h>

void main()
{
    char a[]="haree";

    int len=strlen(a);
    int temp;
    for(int i=0;i<len/2;i++)
    {
        temp=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=temp;
    }
    printf("%s",a);
}
