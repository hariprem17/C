//Write a function to count even and odd numbers using pointers.

#include<stdio.h>
void ev_odd(int *arr,int n)
{
    int *p=arr;
    int count_o=0;
    int count_e=0;
    for(int i=0;i<n;i++)
    {
        if(*p%2==0)
        {
            count_e=count_e+1;
        }
        else
        {
            count_o=count_o+1;
        }
        p++;
    }
    printf("odd:%d",count_o);
    printf("even:%d",count_e);
}
void main()
{
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);

    ev_odd(a,n);
}
