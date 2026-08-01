//33. Search in Rotated Sorted Array

#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,5,6};
    int n1=sizeof(a)/sizeof(a[0]);
    int b[n1];

    int target=3;
    int r=2;

    for(int i=0;i<r;i++)
    {
        b[i]=a[n1-i-1];
    }

    for(int i=0;i<r;i++)
    {
        for(int j=n1-i-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
    }

    for(int i=0;i<r;i++)
    {
        a[i]=b[i];
    }


    int index=-1;
    for(int i=0;i<n1;i++)
    {
        if(a[i]==target)
        {
            index=i;
            break;
        }
    }

    printf("index of %d after rotate is %d",target,index);

}
