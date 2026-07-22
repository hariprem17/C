//2darray input

#include<stdio.h>

void main()
{
    int r,c;
    printf("enter number of rows:");
    scanf("%d",&r);
    printf("enter number of columns:");
    scanf("%d",&c);
    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter 2d array of %d%d :",i,j);
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

}
