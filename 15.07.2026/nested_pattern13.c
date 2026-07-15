#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    //part1
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        for(int s=0;s<((n*2)-(i*2));s++)
        {
            printf(" ");
        }
        for(int s=0;s<((n*2)-(i*2)-2);s++)
        {
            printf(" ");
        }
        for(int r=i;r>0;r--)
        {
            if(r==n)
            {
                continue;
            }
            printf("* ");
        }
        printf("\n");
    }
    //part2
        for(int i=n-1;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        for(int s=0;s<((n*2)-(i*2));s++)
        {
            printf(" ");
        }
        for(int s=0;s<((n*2)-(i*2)-2);s++)
        {
            printf(" ");
        }
        for(int r=i;r>0;r--)
        {
            if(r==n)
            {
                continue;
            }
            printf("* ");
        }
        printf("\n");
    }
}
