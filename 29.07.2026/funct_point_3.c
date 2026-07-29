#include<stdio.h>

void leftrotate(int *arr,int n,int k)
{
    int temp[k];

    int *p=temp;
    int *j=arr;

    for(int i=0;i<k;i++)
    {
        *p=*j;
        p++;
        j++;
    }

    p=arr;
    int *q=arr+k;

    while(q<arr+n)
    {
        *p=*q;
        p++;
        q++;
    }
    int *t=temp;
    while(p<arr+n)
    {
        *p=*t;
        p++;
        t++;
    }
}
void main()
{
    int a[]={5,3,1,7,3};
    int n=sizeof(a)/sizeof(a[0]);
    int k;
    printf("enter a no.of rotation:");
    scanf("%d",&k);

    leftrotate(a,n,k);

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
