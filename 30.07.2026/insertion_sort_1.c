#include<stdio.h>

void main()
{
    int a[]={9,3,8,4,6,1};
    int n=sizeof(a)/sizeof(a[0]);

    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            else
            {
                break;
            }

        }

    }

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
