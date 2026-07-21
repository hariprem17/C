//array reverse

#include<stdio.h>

void main()
{
    int a[]={2,3,4,5,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
