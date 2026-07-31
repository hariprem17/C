#include<stdio.h>

void main()
{
    int a[]={1,2,4,5,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=0;
    int sum1=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    for(int j=0;j<=n;j++)
    {
        sum1=sum1+(j+1);
    }

    int result=sum1-sum;
    printf("%d",result);
}
