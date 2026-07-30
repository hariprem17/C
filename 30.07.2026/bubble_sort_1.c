#include<stdio.h>
void bubble_sort(int *arr,int n)
{

    int temp;
    for(int i=0;i<n;i++)
    {
        int *p=arr;
        int *q=p+1;
        for(int j=i+1;j<n;j++)
        {
            if(*q<*p)
            {
                temp=*q;
                *q=*p;
                *p=temp;
                p++;
                q++;
            }
            else
            {
                p++;
                q++;
            }
        }
    }
}
void main()
{
    int a[]={9,1,6,3,7,4};
    int n=sizeof(a)/sizeof(a[0]);

    bubble_sort(a,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
