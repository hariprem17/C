#include<stdio.h>

void main()
{
    int a[]={50,50,50,50};
    int n=sizeof(a)/sizeof(a[0]);
    int first=a[0],second=-1;

    for(int i=1;i<n;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]<first)
        {
            second=a[i];
        }

    }
    if(second==-1)
    {
        printf("there is no second largest");
    }
    else
    {
       printf("%d",second);
    }

}
