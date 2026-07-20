#include<stdio.h>

void main()
{
     int n;
     printf("enter a number:");
     scanf("%d",&n);
     int a[50];
     int i=0,rem;
     while(n>0)
     {
         rem=n%2;
         a[i]=rem;
         n=n/2;
         i++;
     }
     for(int j=i-1;j>=0;j--)
     {
         printf("%d",a[j]);
     }
}
