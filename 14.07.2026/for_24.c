#include<stdio.h>

void main()
{
    int x,a;
    printf("enter a number:");
    scanf("%d",&x);
    printf("enter a range:");
    scanf("%d",&a);
    int sign=-1;
    float sum=1,result;

    for(int i=2;i<=a;i=i+2)
    {

        int mul=1,fact=1;

        for(int j=0;j<i;j++)
        {
            mul=mul*x;
        }
        for(int z=i;z>0;z--)
        {
            fact=fact*z;
        }

           result=sign *((float)mul/fact);
           sum=sum+result;

           sign=-sign;
    }

    printf("%f",sum);
}
