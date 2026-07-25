#include<stdio.h>
#include<string.h>

void main()
{
    char name[]="haree";
    int count=0;

    while(name[count]!='\0')
    {
        count=count+1;
    }
    printf("%d",count);
}
