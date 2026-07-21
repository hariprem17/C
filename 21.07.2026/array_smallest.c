//second smallest

#include<stdio.h>

void main()
{
    int a[]={4,2,6,3,1,5};
    int n=sizeof(a)/sizeof(a[0]);
    int first=a[0],second=a[-1];

    for(int i=1;i<n;i++)
    {
        if(a[i]<first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>first && second==a[-1] ||a[i]<second)
        {
            second=a[i];
        }
    }
    printf("%d",second);
}

