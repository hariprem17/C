#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
         for(int s=0;s<((n*2)-(i*2));s++)
         {
            printf(" ");
         }
         for(int l=1;l<((n*2)-((i*2)+1));l++)
         {
             printf(" ");
         }
            for(int r=i;r>=1;r--)
            {
                if(r==n)
                {
                    continue;
                }
                printf("%d ",r);
            }


        printf("\n");
    }
}
