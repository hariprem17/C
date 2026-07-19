#include<stdio.h>

void main()
{
    int n;
    printf("enter a size of array");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
