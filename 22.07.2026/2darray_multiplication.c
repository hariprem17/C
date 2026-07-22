//array multiplication

#include<stdio.h>

void main()
{
    int r1,c1,r2,c2;
    printf("matrix 1:\n");
    printf("enter a row :");
    scanf("%d",&r1);
    printf("enter a column:");
    scanf("%d",&c1);
    int a[r1][c1];

    printf("matrix 2:\n");
    printf("enter a row :");
    scanf("%d",&r2);
    printf("enter a column:");
    scanf("%d",&c2);
    int b[r2][c2];
    int c[r1][c2];

    if(c1==r2)
    {
        printf("matrix 1:\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf("enter a 2d array of %d%d:",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("matrix 2:\n");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("enter a 2d array of %d%d:",i,j);
                scanf("%d",&b[i][j]);
            }
        }
       for(int i=0;i<r1;i++)
       {
         for(int j=0;j<c2;j++)
        {
             c[i][j]=0;
         for(int z=0;z<c1;z++)
         {
            c[i][j] += a[i][z] * b[z][j];
         }
    }
}
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("not satisfy matrix mul condition");
    }
}
