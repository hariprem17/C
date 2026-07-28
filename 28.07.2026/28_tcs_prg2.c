
#include<stdio.h>

void main()
{
    int r,c;
    printf("enter a row:");
    scanf("%d",&r);
    printf("enter a column:");
    scanf("%d",&c);

    int a[r][c];
    int index=-1;
    int max=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a digit (0 or 1):");
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
        int count=0;
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                count=count+1;
            }
        }
        if(count>max)
        {
            index=i;
            max=count;
        }
    }
    printf("the row %d contains more 1",index);
}
