#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1,j=n;i<=n,j>0;i++,j--)
    {
        printf("%d %d\n",i,j);
    }
}
