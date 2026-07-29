#include<stdio.h>
void rev(int *arr,int n,int k)
{
    int m=k;

    int temp;
    for(int j=0;j<n/k;j++)
    {
        int *p=arr+j*k;
        int *q=p+k-1;
     for(int i=0;i<m/2;i++)
     {
        temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q--;

     }
    }
    int rem=n%k;
    int *l=arr+n-1;
    int *f=arr+(n-rem);
    for(int i=0;i<(n%k)/2;i++)
    {
        temp=*f;
        *f=*l;
        *l=temp;
        f++;
        l--;
    }
}
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=sizeof(a)/sizeof(a[0]);
    int k=6;

    rev(a,n,k);

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
