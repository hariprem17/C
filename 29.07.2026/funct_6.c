#include<stdio.h>

int func(int a)
{
   int fact1;
   int sum=0;
   int b=a;
   while(a>0)
   {
     int fact=1;
     for(int i=a;i>0;i--)
     {
        fact=fact*i;
     }
     fact1=fact/a;
     sum=sum+fact1;
     a--;
   }
   return sum;

}


void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int series=func(n);
    printf("%d",series);
}
