#include<stdio.h>

void main()
{
    int a[]={9,3,5,6,2};
    int n=sizeof(a)/sizeof(a[0]);
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
