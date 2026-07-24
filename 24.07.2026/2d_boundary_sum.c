#include<stdio.h>

void main()
{
    int r,c;
    printf("enter a row:");
    scanf("%d",&r);
    printf("enter a column:");
    scanf("%d",&c);
    int a[r][c];


    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a 2d array of %d%d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    int right=c;
    int left=0;
    int top=0;
    int bottom=r;
    int sum=0;

    for(int j=0;j<c;j++)
    {
        sum=sum+a[top][j];
    }

    for(int i=top+1;i<bottom-1;i++)
    {
        sum=sum+a[i][right-1];
    }

    for(int j=right-1;j>left;j--)
    {
        sum=sum+a[bottom-1][j];
    }
    for(int i=bottom-1;i>top;i--)
    {
        sum=sum+a[i][left];
    }

    printf("%d",sum);
}

