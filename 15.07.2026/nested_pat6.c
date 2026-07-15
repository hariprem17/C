#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<=(n-i)*2;s++)
        {
            printf(" ");
        }

            for(int j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            for(int z=i-1;z>=1;z--)
            {
                printf("%d ",z);
            }
        printf("\n");
    }

}
