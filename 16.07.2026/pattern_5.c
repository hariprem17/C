#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<n-i;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1)
            {
                printf("%d",j);
            }
            else if(j%2!=0 && j!=n)
            {
                printf("%d",i-1);
            }
            else if(j==n)
            {
                printf("%d",n+1);
            }
            else
            {
                printf(" ");
            }
        }
        for(int j=i-1;j>=1;j--)
        {
            if(j==1)
            {
                printf("%d",j);
            }
            else if(j%2!=0 && j!=n)
            {
                printf("%d",i-1);
            }
            else if(j==n)
            {
                printf("%d",n+1);
            }
            else
            {
                printf(" ");
            }


        }

        printf("\n");
    }
    //second
        for(int i=n-1;i>0;i--)
    {
        for(int s=0;s<n-i;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1)
            {
                printf("%d",j);
            }
            else if(j%2!=0 && j!=n)
            {
                printf("%d",i-1);
            }
            else if(j==n)
            {
                printf("%d",n+1);
            }
            else
            {
                printf(" ");
            }
        }
        for(int j=i-1;j>=1;j--)
        {
            if(j==1)
            {
                printf("%d",j);
            }
            else if(j%2!=0 && j!=n)
            {
                printf("%d",i-1);
            }
            else if(j==n)
            {
                printf("%d",n+1);
            }
            else
            {
                printf(" ");
            }


        }

        printf("\n");
    }
}
