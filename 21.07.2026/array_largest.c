//second largest

#include<stdio.h>

void main()
{
    int a[]={10,40,50,80,20,75};
    int n=sizeof(a)/sizeof(a[0]);
    int first=a[0],second=-1;

    for(int i=1;i<n;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>second)
        {
            second=a[i];
        }
    }
    printf("%d",second);
}
