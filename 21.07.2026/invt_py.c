//inverted py

#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<i-1;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=n-i+1;j++)
        {
            printf("%d ",j);


       }
        printf("\n");


 }
}
