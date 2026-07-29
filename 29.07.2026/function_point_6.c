#include<stdio.h>
void moveneg(int *arr,int n)
{
    int *p=arr;
    int *q=arr+1;

    for(int i=1;i<n;i++)
    {
        if(*q<0)
        {
            int *m=q;
            int *t=q-1;
            int temp;

            temp=*m;
            while(t>=p)
            {
             *m=*t;
             m--;
             t--;
            }
            *p=temp;
            p++;
            q++;
        }
        else
        {
            q++;
        }
    }

}
void main()
{
    int a[]={3,4,-2,-4,-1};
    int n=sizeof(a)/sizeof(a[0]);

    moveneg(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
