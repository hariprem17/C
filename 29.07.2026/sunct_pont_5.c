#include<stdio.h>

void circular(int *arr1,int *arr2,int n)
{
   int *p=arr1;
   int *q=arr2;

   for(int i=0;i<n;i++)
   {
       while(q<arr2+n && *p!=*q)
       {
           q++;
       }
       for(int i=0;i<n;i++)
       {
           if(*p!=*q)
           {
               break;
           }
           else
           {
               p++;
               q++;
           }
           if(q==arr2+n)
           {
               q=arr2;
           }

       }
   }
}

void main()
{
    int a[]={1,2,3,4,5};
    int b[]={5,1,2,3,4};

    int n=sizeof(a)/sizeof(a[0]);

    circular(a,b,n);
}
