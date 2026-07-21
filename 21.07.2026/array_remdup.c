//remove duplicate
#include<stdio.h>

void main()
{
    int a[]={1,2,5,4,1,6,1,8,7};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(int p=j;p<n-1;p++)
                {
                  a[p]=a[p+1];
                }
                j--;
                n--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
