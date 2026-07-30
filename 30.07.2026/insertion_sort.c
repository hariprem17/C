#include<stdio.h>

void insert(int *arr,int n)
{

    int *q=arr+1

    for(int i=0;i<n;i++)
    {
        int *p=arr;
        if(*q<*p)
        {
            temp=*q;
            int *f=q-1;
            int *l=q;
            while(f>=p)
            {
                *l=*f;
                f--;
                l--;
            }

        }
        else
        {
            p++;
        }
        q++;
    }
}
void main()
{
    int a[]={9,3,8,4,6,1};
    int n=sizeof(a)/sizeof(a[0]);

    insert(a,n);

}
