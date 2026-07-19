#include<stdio.h>

void main()
{
    int a[]={2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);

    int b[n-1],c=n-1;
    for(int i=0;i<n;i++)
    {
        b[c-i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
