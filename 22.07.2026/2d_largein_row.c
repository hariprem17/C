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
    for(int i=0;i<c;i++)
    {
        int largest=0;
        for(int j=0;j<r;j++)
        {
            if(a[j][i]>largest)
            {
                largest=a[j][i];
            }
        }
        printf("%d ",largest);
    }
}
