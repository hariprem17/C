#include<stdio.h>

void rev(int *arr,int n)
{
    int *p=arr;
    int *q=arr+n-1;
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q--;
    }
}


void main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);

    rev(a,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
