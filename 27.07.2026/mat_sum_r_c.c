#include<stdio.h>

void main()
{
    int r,c;
    printf("enter a row:");
    scanf("%d",&r);
    printf("enter a column");
    scanf("%d",&c);

    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a 2d array fo %d%d:",i,j);
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
    int sum1=0;
    int sum2=0;
    for(int i=0;i<r;i++)
    {
        int sum_1=0,sum_2=0;

        for(int j=0;j<c;j++)
        {
            sum1=sum1+a[i][j];
            sum_1=sum_1+a[i][j];
            sum2=sum2+a[j][i];
            sum_2=sum_2+a[j][i];

        }
        printf("%d =%d\n",i,sum_1);
        printf("%d =%d\n",i,sum_2);
    }
    printf("sum of rows is %d\n",sum1);
    printf("sum of rows is %d\n",sum2);

}
