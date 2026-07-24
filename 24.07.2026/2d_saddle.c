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

    for(int i=0;i<r;i++)
    {
        int col=0;
        int smallest;
        int largest;

        smallest=a[i][0];
        for(int j=0;j<c;j++)
        {
            if(a[i][j]<smallest)
            {
                smallest=a[i][j];
                col=j;
            }

        }
        largest=a[i][col];
        for(int z=0;z<r;z++)
        {

            if(a[z][col]>largest)
            {
                largest=a[z][col];
            }
        }
        if(smallest==largest)
        {
            printf("saddle %d",smallest);
        }

    }

}
