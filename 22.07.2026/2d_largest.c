//largest

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
    int larg=0;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            {
            if(a[i][j]>larg)
            {
                larg=a[i][j];
            }
            }
        }
    }
    printf("largest is %d",larg);
}
