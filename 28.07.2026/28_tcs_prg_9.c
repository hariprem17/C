#include<stdio.h>

void main()
{
    int a[]={-7, 1, 5, 2, -4, 3, 0};
    int n=sizeof(a)/sizeof(a[0]);
    int left=0;
    int right=1;
    int equ=0;

    for(int i=0;i<n;i++)
    {
        int sum_l=0;
        int sum_r=0;

       for(int j=0;j<left;j++)
       {
           sum_l=sum_l+a[j];
       }

       for(int z=right;z<n;z++)
       {
           sum_r=sum_r+a[z];
       }
       if(sum_l==sum_r)
       {
           equ=1;
           printf("equlibrium index is %d",i);
           break;
       }
       left++;
       right++;

    }
    if(equ==0)
    {
        printf("No equilibrium index in array");
    }

}
