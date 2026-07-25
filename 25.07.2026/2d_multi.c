//2d multiplication

#include<stdio.h>

void main()
{
    int r,c,r1,c1;
    printf("matrix 1:\n");
    printf("enter a row:");
    scanf("%d",&r);
    printf("enter a column:");
    scanf("%d",&c);

    printf("matrix 2:\n");
    printf("enter a row:");
    scanf("%d",&r1);
    printf("enter a column:");
    scanf("%d",&c1);
    int a[r][c];
    int b[r1][c1];
    int g[r][c1];

  if(c==r1)
  {

    printf("matrix 1:\n");
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

    printf("matrix 2:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("enter a 2d array of %d%d:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }


    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c1;j++)
        {
            g[i][j]=0;
            for(int z=0;z<r1;z++)
            {
                g[i][j]+=a[i][z]*b[z][j];
            }
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d ",g[i][j]);
        }
        printf("\n");
    }
  }
}
