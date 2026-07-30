#include<stdio.h>
void copy(int *arr1,int *arr2,int n)
{
    int *p=arr1;
    int *q=arr2;
    for(int i=0;i<n;i++)
    {
        *q=*p;
        q++;
        p++;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",*(arr2+i));
    }
}
void main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];

    copy(a,b,n);
}
