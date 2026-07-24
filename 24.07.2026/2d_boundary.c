//boundary
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
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
   printf("boundary of matrix :\n");
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           if(i==0)
           {
               printf("%d ",a[i][j]);
           }
           else if(i>0 && j==c-1 && i<c-1)
           {
               printf("%d ",a[i][j]);
           }

       }

   }



   for(int i=0;i<r;i++)
   {
       for (int j=c-2;j>=0;j--)
       {
           if(i==r-1)
           {
               printf("%d ",a[i][j]);
           }
       }
   }
    for(int i=r-1;i>=0;i--)
   {
       for (int j=0;j<c;j++)
       {
           if(j==0 && i!=0 &&i<r-1)
           {
               printf("%d ",a[i][j]);
           }
       }
   }

}
