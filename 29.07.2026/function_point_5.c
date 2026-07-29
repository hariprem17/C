#include<stdio.h>

void circular(int *arr1,int *arr2,int n)
{
    int *p=arr1;
    int *q=arr2;
    int circ=0;

    for(int i=0;i<n;i++)
    {
        if(*p!=*q)
        {
            q++;
        }
        else if(*p==*q)
        {
            break;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(*p==*q)
        {
            p++;
            q++;
        }
        else if(*p!=*q)
        {
            circ=1;
            break;
        }
        if(q==arr2+n)
        {
            q=arr2;
        }
    }
    if(circ==0)
    {
        printf("circular");
    }
    else
    {
        printf("Not circular");
    }
}
void main()
{
    int a[]={1,2,3,4,5};
    int b[]={5,2,1,3,4};
    int n=sizeof(a)/sizeof(a[0]);

    circular(a,b,n);
}
