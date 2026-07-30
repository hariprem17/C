#include<stdio.h>
void rotate(int *arr,int n,int k)
{
    int temp;
    for(int i=0;i<n/k;i++)
    {
        int *p=arr+i*k;
        int *q=p+k-1;

        for(int j=0;j<k/2;j++)
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
    int *f=arr+n-rem;
    for(int i=0;i<rem/2;i++)
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
    int a[]={1,2,3,4,5,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);

    int k;
    printf("enter no.of groups:");
    scanf("%d",&k);

    rotate(a,n,k);

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
