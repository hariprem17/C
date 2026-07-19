#include<stdio.h>

void main()
{
    int a[]={10,10,10,10};
    int n=sizeof(a)/sizeof(a[0]);
    int first=a[0],sorted=1;

    if(a[1]>a[0])
    {
        for(int i=1;i<n;i++)
        {
            if(a[i]>=first)
            {
                first=a[i];
            }
            else
            {
                sorted=0;
            }
        }
    }
    else if(a[1]<a[0])
    {
        for(int i=1;i<n;i++)
        {
            if(a[i]<=first)
            {
                first=a[i];
            }
            else
            {
                sorted=0;
            }
        }
    }


    if(sorted==1)
    {
        printf("array is sorted");
    }
    else
    {
        printf("array is not sorted");
    }
}
