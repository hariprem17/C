#include<stdio.h>

void min_sum(int *arr,int n)
{
    int *p=arr;
    int min=*p+(arr+1);
    int elem1;
    int elem2;
    for(int i=0;i<n;i++)
    {
        int *q=p+1;
        for(int j=i+1;j<n;j++)
        {
            if((*p+*q)<min)
            {
                min=*p+*q;
                elem1=*p;
                elem2=*q;
                q++;
            }
            else
            {
                q++;
            }
        }
        p++;
    }
    printf("the sum %d and %d element close to 0 ",elem1,elem2);
}
void main()
{
    int a[]={9,8,6,7,2};
    int n=sizeof(a)/sizeof(a[0]);

    min_sum(a,n);
}
