#include<stdio.h>

void neg(int *arr,int n)
{
    int *p=arr;
    int *q=p;
    int temp;

    while(q<arr+n)
    {
        if(*q<0)
        {
            temp=*q;
            int *m=q;
            int *n=q-1;;
            while(n>=p)
            {
                *m=*n;
                m--;
                n--;
            }
            *p=temp;
            p++;
        }
        q++;
    }



}
void main()
{
    int a[]={-3,1,2,3,-4,-2};
    int n=sizeof(a)/sizeof(a[0]);

    neg(a,n);

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
