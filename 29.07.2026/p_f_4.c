//Write a function to find the minimum element in an array using pointers.

#include<stdio.h>
void array(int *arr,int n)
{
    int *p=arr;
    int min=*arr;
    for(int i=0;i<n;i++)
    {
        if(*p<min)
        {
            min=*p;
        }
        p++;
    }
    printf("min is %d",min);
}
void main()
{
    int a[]={4,7,2,9,5};
    int n=sizeof(a)/sizeof(a[0]);

    array(a,n);
}
