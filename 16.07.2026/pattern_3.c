#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int k=i;
        for(int s=0;s<(n-i);s++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
             printf("%d",k);
                k++;

        }
        k = i + i - 2;
        while(k >= i)
        {
            printf("%d", k);
            k--;
        }

        printf("\n");



    }
}
