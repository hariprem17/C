//sort ascending

#include<stdio.h>

void main()
{
    int a[]={2,4,6,3,1,5};
    int n=sizeof(a)/sizeof(a[0]);

    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {

            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    for(int i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }



}
