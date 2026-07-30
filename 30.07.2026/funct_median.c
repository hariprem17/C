#include<stdio.h>
void median(int *arr1,int *arr2,int n)
{
    int *p=arr1;
    int *q=arr2;

    int i=0;
    int j=0;
    int count=0;
    while(count>n/2)
    {
        if(*p>*q)
        {
            p++;
        }
        else if(*q>*p)
        {
            q++;
        }
    }
}
void main()
{
    int a[]={1,2,5,8,9};
    int b[]={3,4,6,7,10};

    int n=sizeof(a)/sizeof(a[0]);

    median(a,b,n);
}
