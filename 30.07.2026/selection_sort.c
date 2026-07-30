#include<stdio.h>

void main()
{
    int a[]={4,7,3,9,2};
    int n=sizeof(a)/sizeof(a[0]);

    int temp;
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;

    }

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
