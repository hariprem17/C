//array right rotate

#include<stdio.h>

void main()
{
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    int temp=0;

    temp=a[n-1];
    for(int j=n-1;j>=0;j--)
    {
        a[j+1]=a[j];
    }
    a[0]=temp;

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
