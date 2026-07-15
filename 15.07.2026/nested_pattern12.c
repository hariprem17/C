#include<stdio.h>

void main()
{
    int n,m;
    printf("enter a number:");
    scanf("%d",&n);
    printf("enter number of times to repeat:");
    scanf("%d",&m);

for(int k=1;k<=m;k++)
{


    //part 1
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==i)
            {
                printf("%d",i);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    //part 2
    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<((n*2)-(i*2));s++)
        {
            printf(" ");
        }
        for(int j=i;j<=i;j++)
        {
            printf("%d",j);
        }

        printf("\n");
    }


 }
}
