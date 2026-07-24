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
    int largest=0;
    int sum1=0;
    for(int j=0;j<c;j++)
    {
        int sum=0;

        for(int i=0;i<r;i++)
        {
            sum=sum+a[i][j];
        }
        if(sum>sum1)
        {
            sum1=sum;
            largest=j;
        }
    }

    printf("row with max sum is %d",largest);
}

