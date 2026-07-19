#include<stdio.h>

void main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("enter a elements:");
        scanf("%d",&a[i]);
    }
     printf("elements are:");
     for(int i=0;i<n;i++)
    {

        printf("%d ",a[i]);
    }
}
