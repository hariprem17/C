//Write a function to find the maximum element in an array using pointers.

#include<stdio.h>
void array(int *arr,int n)
{
    int *p=arr;
    int max=*arr;
    for(int i=0;i<n;i++)
    {
        if(*p>max)
        {
            max=*p;
        }
        p++;
    }
    printf("max is %d",max);
}
void main()
{
    int a[]={4,7,2,9,5};
    int n=sizeof(a)/sizeof(a[0]);

    array(a,n);
}
