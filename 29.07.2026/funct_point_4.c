#include<stdio.h>
void rightrotate(int *arr,int n,int k)
{
    int temp[k];

    int *p=arr+(n-k);
    int *t=temp;

    for(int i=0;i<k;i++)
    {
        *t=*p;
        p++;
        t++;
    }

    p=arr+n-1;
    int *q=arr+n-k-1;
    while(q>=arr)
    {
        *p=*q;
        p--;
        q--;
    }
    t=temp;
    p=arr;
    while(t<temp+k)
    {
        *p=*t;
        t++;
        p++;
    }

}
void main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int k;
    printf("enter a no.of rotaion:");
    scanf("%d",&k);

    rightrotate(a,n,k);

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
