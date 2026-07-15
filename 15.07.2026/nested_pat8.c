#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
//upper part
    for(int i=0;i<n;i++)
    {
        for(int s=0;s<n-i;s++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
//lower part
int m=n;
    for(int i=1;i<n;i++)
    {
        for(int s=0;s<i+1;s++)
        {
            printf(" ");
        }
        for(int j=m-i;j>0;j--)
        {
            printf("* ");
        }

        printf("\n");
    }
}
