#include<stdio.h>

void main()
{
    int a=10;
    int *ptr=&a;
    int **q;
    q=&ptr;
    a++;
    ptr++;
    ptr=&a;

    printf("%d\n",&a);
    printf("%d\n",a);
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);
    //printf("%d\n",++ptr);
    printf("%d\n",q);
    printf("%d\n",*q);
    printf("%d\n",**q);
}
