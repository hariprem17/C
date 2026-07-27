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
            int *p=&a[i][j];
            printf("enter a matrix of %d%d:",i,j);
            scanf("%d",&*p);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int *p=&a[i][j];
            printf("%d ",*p);
        }
        printf("\n");
    }

    int det=(a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2]))-
            (a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]))+
            (a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]));

    printf("determinant is %d",det);

}
