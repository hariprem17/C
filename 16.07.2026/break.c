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
            break;
        }
    printf("%d\n",i);
    }
    printf("break executed");
}
