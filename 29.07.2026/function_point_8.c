#include<stdio.h>

int missing(int *arr,int n)
{
    int *p=arr;
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum=sum+ *p;
        p++;
    }

    int expected=n*(n+1)/2;

    int missing=expected-sum;

    return missing;

}
void main()
{
    int a[]={1,2,3,5,6};
    int n=6;

    int missed=missing(a,n);
    printf("%d",missed);
}
