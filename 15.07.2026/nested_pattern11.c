#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a=1,b=0;
    //upper
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
          if(j%2==0)
         {
            printf("%d ",b);
         }
          else
         {
            printf("%d ",a);
         }
        }
         for(int s=0;s<((n*2)-((i*2)+1)+1);s++)
         {
             printf(" ");
         }
          for(int s=0;s<((n*2)-((i*2)+1)-1);s++)
         {
             printf(" ");
         }
        for(int r=i;r>0;r--)
        {
            if(r%2==0)
         {
            printf("%d ",b);
         }
          else if(r==n)
          {
              continue;
          }
          else
         {
            printf("%d ",a);
         }
        }

       printf("\n");
    }
    //lower
        for(int i=n-1;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
          if(j%2==0)
         {
            printf("%d ",b);
         }
          else
         {
            printf("%d ",a);
         }
        }
         for(int s=0;s<((n*2)-((i*2)+1)+1);s++)
         {
             printf(" ");
         }
          for(int s=0;s<((n*2)-((i*2)+1)-1);s++)
         {
             printf(" ");
         }
        for(int r=i;r>0;r--)
        {
            if(r%2==0)
         {
            printf("%d ",b);
         }
          else if(r==n)
          {
              continue;
          }
          else
         {
            printf("%d ",a);
         }
        }

       printf("\n");
    }
}


