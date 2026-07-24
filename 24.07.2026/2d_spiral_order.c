//2d spiral order

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

     int top=0;
     int left=0;
     int right=c;
     int bottom=r;

    while(top < bottom && left < right)
    {
        if(top<bottom-1)
        {

        for(int j=left;j<right;j++)
        {
          printf("%d ",a[top][j]);
        }
        }


        for(int i=top+1;i<bottom-1;i++)
        {

                    printf("%d ",a[i][right-1]);

        }

         for(int j=right-1;j>=left;j--)
         {

             printf("%d ",a[bottom-1][j]);

         }
        if(left<right-1)
        {
        for(int i=bottom-2;i>top;i--)
        {

                    printf("%d ",a[i][left]);

        }
        }
        top++;
        left++;
        right--;
        bottom--;
    }


}
