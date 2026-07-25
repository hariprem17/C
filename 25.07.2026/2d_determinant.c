//determinant 2*2

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
    int sum;
    for(int i=0;i<r/2;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(j%2==0)
            {
                sum=a[i][j]*a[i+1][j+1];
            }
            else if(j%2!=0)
            {
                sum=sum-a[i][j]*a[i+1][j-1];
            }

        }
    }
    printf("%d",sum);
}
