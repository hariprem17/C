#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",i,n,i*n);
    }
}
