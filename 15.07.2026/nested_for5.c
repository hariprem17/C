#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=n;i>0;i--)
    {
        for(int s=0;s<n-i;s++)
        {
            printf(" ");
        }

        for(int j=1;j<=i;j++)
        {
          printf("%d",j);
        }

        printf("\n");
    }
}
