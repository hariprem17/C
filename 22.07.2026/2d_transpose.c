//2d transpose

#include<Stdio.h>

void main()
{
    int r,c;
    printf("enter a rows :");
    scanf("%d",&r);
    printf("enter a columns:");
    scanf("%d",&c);

    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter a 2d array for %d%d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("current matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
