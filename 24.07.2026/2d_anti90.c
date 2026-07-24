//rotate anti 90deg

#include<stdio.h>

void main()
{
    int r,c;
    printf("enter a row:");
    scanf("%d",&r);
    printf("enter a column:");
    scanf("%d",&c);
    int a[r][c];
    int b[c][r];
    int flag=1;

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
            b[i][j]=a[j][i];
        }
    }

   printf("anti 90* matrix \n");

   for(int j=0;j<c;j++)
   {
       int m=r-1;
       for(int i=0;i<r;i++)
       {
           a[i][j]=b[m][j];
           m--;
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

    }
}


