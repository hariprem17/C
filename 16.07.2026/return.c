#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i==6)
        {
            return;
        }
    printf("%d\n",i);
    }
    printf("return executed");
}

