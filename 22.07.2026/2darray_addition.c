//2darray addition

#include<stdio.h>

void main()
{
    printf("Matrix addition:\n");

    printf("Matrix 1:\n");
    int r1,c1;
    printf("enter number of rows:");
    scanf("%d",&r1);
    printf("enter number of columns:");
    scanf("%d",&c1);
    int a[r1][c1];

    printf("Matrix 2:\n");
    int r2,c2;
    printf("enter number of rows:");
    scanf("%d",&r2);
    printf("enter number of columns:");
    scanf("%d",&c2);
    int b[r2][c2];
    int c[r2][c2];

    if(r1==r2 && c1==c2)
    {
     printf("enter a elements for matrix 1:\n");
     for(int i=0;i<r1;i++)
     {
        for(int j=0;j<c1;j++)
        {
            printf("Enter 2d array of %d%d :",i,j);
            scanf("%d",&a[i][j]);
        }

     }
    printf("enter a elements for matrix 2:\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("Enter 2d array of %d%d :",i,j);
            scanf("%d",&b[i][j]);
        }

    }


    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
  }
  else
  {
      printf("Matrix addition not possible");
  }

}
