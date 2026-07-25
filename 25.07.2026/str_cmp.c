#include<stdio.h>
#include<string.h>

void main()
{
    char a[]="haree";
    char b[]="hari";

    printf("%d",strncmp(a,b,3));
}
