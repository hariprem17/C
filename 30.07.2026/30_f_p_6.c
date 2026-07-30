#include<stdio.h>

void rotate(int *arr1,int *arr2,int n1,int r)
{
   int *p=arr1;
   int *t=arr2;

   for(int i=0;i<r;i++)
   {
       *t=*p;
       p++;
       t++;
   }

   p=arr1;
   int *q=arr1+r;
   while(q<arr1+n1)
   {
       *p=*q;
       p++;
       q++;
   }
   int *f=arr1+n1-r;
   int *l=arr2;

   while(f<arr1+n1)
   {
       *f=*l;
       f++;
       l++;
   }


}
void main()
{
    int a[]={1,2,3,4,5};
    int n1=sizeof(a)/sizeof(a[0]);
    int b[n1];
    int r;
    printf("enter no.of rotate:");
    scanf("%d",&r);

    rotate(a,b,n1,r);

    for(int i=0;i<n1;i++)
    {
        printf("%d",a[i]);
    }
}

