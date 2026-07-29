#include<stdio.h>

int longe(int *arr,int n)
{
    int *p=arr;
    int *q=arr+1;

    int max=0;
    int len=1;
    for(int i=0;i<n;i++)
    {

        if(*q>*p)
        {
            len=len+1;
            p++;
            q++;
        }
        else
        {
             p=q;
             q++;
             len=1;
        }

        if(len>max)
        {
            max=len;
        }

    }
    return max;
}

void main()
{
    int a[]={2,4,6,3,1,5,9,7,8,1};
    int n=sizeof(a)/sizeof(a[0]);

    int len=longe(a,n);
    printf("Maximum len is %d",len);
}
