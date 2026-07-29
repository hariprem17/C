#include<stdio.h>

void median(int *arr1,int *arr2,int n1,int n2)
{
    int *p1=arr1;
    int *p2=arr2;
    int max=0;
    for(int i=0;i<n1+n2/2;i++)
    {
        for(int j=0;j<n1;j++)
        {
            for(int z=0;z<n1;z++)
            {
                if(*p1>max)
                {
                    max=*p1;
                }
            }
            for(int b=0;b<n2;b++)
            {
                if(*p2>max)
                {
                    max=
                }
            }
        }
    }
}
void main()
{
    int a[]={6,7,8,9,10};
    int b[]={1,2,3,4,5};

    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(a)/sizeof(b[0]);

    median(a,b,n1,n2);
}
