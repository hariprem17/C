#include<stdio.h>

void main()
{
    int a[]={20,30,40,33,25};
    int n=sizeof(a)/sizeof(a[0]);
    int first=a[0],second=-1,third=-1;

    for(int i=1;i<n;i++)
    {
        if(a[i]>first)
        {
            third=second;
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]<first)
        {
            third=second;
            second=a[i];
        }
        else if(a[i]>third && a[i]<second)
        {
            third=a[i];
        }
    }
    printf("%d",third);
}
