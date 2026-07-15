
#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
//upper part
    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<=(n-i)*2;s++)
        {
            printf(" ");
        }

            for(int j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            for(int z=i-1;z>=1;z--)
            {
                printf("%d ",z);
            }
        printf("\n");
    }
//lower part
  int m=n;
    for(int i=1;i<n;i++)
    {
        for(int s=0;s<(i*2)+1;s++)
        {
            printf(" ");

        }
        for(int j=1;j<=n-i;j++)
        {
            printf("%d ",j);
        }
          for(int z=m-2;z>0;z--)
         {
            printf("%d ",z);
        }
        m--;

        printf("\n");
    }

}
