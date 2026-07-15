#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int m=n;

   for(int i=1;i<=n;i++)
    {
        for(int s=0;s<i-1;s++)
        {
            printf(" ");
        }
        for(int j=m;j>0;j--)
        {
            printf("*");
        }
        m--;
        for(int z=m-1;z>=0;z--)
        {
            printf("*");
        }
        printf("\n");
    }

    int l=n;
    int p=n;
    int o=n;
    for(int i=n-1;i>0;i--)
    {
        for(int s=l-1;s>0;s--)
        {
            if(s==l-1)
            {
                continue;
            }
            printf(" ");
        }
        l--;
        for(int j=o-(p-1);j>=0;j--)
        {

            printf("*");
        }
        p--;

        for(int z=0;z<n-i;z++)
        {
            printf("*");
        }


        printf("\n");
    }
}

