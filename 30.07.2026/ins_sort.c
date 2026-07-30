#include<stdio.h>

void main()
{
    int a[]={2,5,7,3,9};
    int n=sizeof(a)/sizeof(a[0]);
    int temp;
    for(int i=0;i<n;i++)
    {
        int j=i-1;
        while(j>=0)
        {
            if(a[i]<a[j])
            {
                j--;
            }
            else
            {
                int temp=a[i];
                for(int z=i;z>j;z--)
                {
                    a[z]=a[z-1];
                }
                a[j+1]=temp;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
