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
            printf("enter a array of %d%d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        int *p=&a[i][0];
        for(int j=0;j<c;j++)
        {
           printf("%d ",*(p+j));
        }
        printf("\n");

    }
    int all_r_sum=0;
    for(int i=0;i<r;i++)
    {
        int sum=0;

        for(int j=0;j<c;j++)
        {
           int *p=&a[i][j];
           sum=sum+ *p ;
           all_r_sum=all_r_sum+ *p ;
        }
        printf("sum of row %d is %d\n",i,sum);
    }
    printf("sum all all rows is %d\n",all_r_sum);

    int all_c_sum=0;
    for(int i=0;i<c;i++)
    {
        int sum=0;
        for(int j=0;j<r;j++)
        {
            int *p=&a[j][i];
            sum=sum+ *p ;
            all_c_sum=all_c_sum+ *p ;
        }
        printf("sum of column %d is %d \n",i,sum);
    }
    printf("sum all all rows is %d\n",all_c_sum);
}
