#include<stdio.h>

void main()
{
    int b;
    printf("enter a number:");
    scanf("%d",&b);
    int sum=0,total,total_1;

    for(int i=1;i<=b;i++)
    {
        if(i==1 || i==2)
        {
            sum=sum+1;
        }
        else
        {
            total=total_1+2;
            total_1=total;
            sum=sum+total;
        }
    }
    printf("%d",sum);
}
