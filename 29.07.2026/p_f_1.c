//Write a function to find the sum of array elements using pointers.

#include<stdio.h>
void array(int *arr,int n)
{
    int *p=arr;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+*p;
        p++;
    }
    printf("sum is %d",sum);
}
void main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);

    array(a,n);
}
