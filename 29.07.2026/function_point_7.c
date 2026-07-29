#include<stdio.h>
int dup(int *arr,int n)
{
    int *p=arr;

    for(int i=0;i<n;i++)
    {
        int *q=p+1;
        for(int j=i+1;j<n;j++)
        {
            if(*p==*q)
            {
                int *f=q;
                int *l=q+1;
                while(l<arr+n)
                {
                    *f=*l;
                    f++;
                    l++;
                }
               n--;
               q--;
            }
            else if(*p!=*q)
            {
                q++;
            }
        }
        p++;
    }
    return n;
}
void main()
{
    int a[]={1,2,3,1,4,5,6,2,9};
    int n=sizeof(a)/sizeof(a[0]);

    int ind=dup(a,n);

    for(int i=0;i<ind;i++)
    {
        printf("%d ",a[i]);
    }
}
