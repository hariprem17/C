#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<n-i;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1)
            {
                printf("* ");
            }
            else if(j>1 && j<i)
            {
                printf("  ");
            }
            else if(j==i)
            {
                printf("* ");
            }
        }

      printf("\n");
    }
    //part 2
      for(int i=n-1;i>0;i--)
    {
        for(int s=0;s<n-i;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1)
            {
                printf("* ");
            }
            else if(j>1 && j<i)
            {
                printf("  ");
            }
            else if(j==i)
            {
                printf("* ");
            }
        }

      printf("\n");
    }
}
