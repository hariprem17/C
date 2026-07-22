//count odd even

#include<stdio.h>

void main()
{
    int r,c;
    printf("enter a row:");
    scanf("%d",&r);
    printf("enter a column:");
    scanf("%d",&c);
    int a[r][c];
    int count_o=0,count_e=0;

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
            if(a[i][j]%2==0)
            {
                count_e+=1;
            }
            else
            {
                count_o+=1;
            }
        }
    }
    printf("%d\n",count_e);
    printf("%d",count_o);
}
