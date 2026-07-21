//array left rotate

#include<stdio.h>

void main()
{
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    int temp=0;

    temp=a[0];
    for(int j=1;j<n;j++)
    {
        a[j-1]=a[j];
    }
    a[n-1]=temp;

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
