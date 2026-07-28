#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    int r;
    printf("enter numbers element to rotate:");
    scanf("%d",&r);

    for(int i=0;i<r;i++)
    {
        b[i]=a[i];
    }

    for(int i=1;i<=r;i++)
    {
        for(int j=r-i;j<n;j++)
        {
            a[j]=a[j+1];
        }
    }
    int g=n-r;
    for(int i=g;i<n;i++)
    {
        a[i]=b[i-g];
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
