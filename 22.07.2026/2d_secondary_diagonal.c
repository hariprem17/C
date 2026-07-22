//print diagonal
#include<Stdio.h>

void main()
{
    int r,c;
    printf("enter a row:");
    scanf("%d",&r);
    printf("enter a column:");
    scanf("%d",&c);
    int a[r][c];
    int c1=c;

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
        for(int j=c-i-1;j<c1;j++)
        {
            printf("%d",a[i][j]);
            c1--;
        }
        printf("\n");
    }
    }
    else
    {
        printf("diagonal condition not satisfies");
    }
}
