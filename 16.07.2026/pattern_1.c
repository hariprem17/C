#include<stdio.h>

void main()
{
    int n;

    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c",j+65);
        }
        printf("\n");
    }
}
