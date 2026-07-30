#include<stdio.h>

void main()
{
    int a[]={6,8,3,9,1};
    int n=sizeof(a)/sizeof(a[0]);
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
