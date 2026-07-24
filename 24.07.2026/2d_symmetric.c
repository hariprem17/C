//symmetric matrix

#include<stdio.h>

void main()
{
    int r,c;
    printf("enter a row:");
    scanf("%d",&r);
    printf("enter a column:");
    scanf("%d",&c);
    int a[r][c];
    int flag=0;

    if(r==c)
    {

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

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==a[j][i])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
    }

    if(flag)
    {
        printf("It is symmetric");
    }
    else
    {
        printf("it is not symmetric");
    }
    }
    else
    {
        printf("it not square matrix");
    }
}
