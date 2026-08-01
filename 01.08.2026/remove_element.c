#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,5,3};
    int n=sizeof(a)/sizeof(a[0]);
    int rem=3;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==rem)
            {
                for(int z=j;z<n;z++)
                {
                     a[z]=a[z+1];
                }
                n--;
                j--;
            }

        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
