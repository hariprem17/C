//Write a function to print all elements of an array using a pointer.
#include<stdio.h>
void array(int *arr,int n)
{
    int *p=arr;

    for(int i=0;i<n;i++)
    {
        printf("%d ",*p);
        p++;
    }
}
void main()
{
   int a[]={1,2,3,4,5,6};
   int n=sizeof(a)/sizeof(a[0]);

   array(a,n);
}
