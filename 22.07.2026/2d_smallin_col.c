#include<Stdio.h>

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
        int smallest=a[i][0];
        for(int j=0;j<c;j++)
        {
            if(a[i][j]<smallest)
            {
                smallest=a[i][j];
            }
        }
        printf("%d",smallest);
        printf("\n");
    }
}
