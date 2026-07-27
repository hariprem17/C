#include<stdio.h>

void main()
{
    int r,c;
    printf("enter a row:");
    scanf("%d",&r);
    printf("enter a column:");
    scanf("%d",&c);
    int a[r][c];
    if(r==c)
    {
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int *p=&a[i][j];
            if(i<=j)
            {
                printf("enter a matrix of %d%d:",i,j);
                scanf("%d",&*p);
            }
            else if(i>j)
            {
                *p=0;
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int *p=&a[i][j];
            printf("%d ", *p);
        }
            printf("\n");
    }
    }
    else
    {
        printf("rows and columns must be equal");
    }
}
