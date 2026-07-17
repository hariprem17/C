#include<stdio.h>

void main()
{
    int b;
    printf("enter number of boxes:");
    scanf("%d",&b);
    int total,total_1,sum=0;

    for(int i=1;i<=b;i++)
    {
        if(i==1)
        {
            total_1=5;
            sum=total_1;
        }
        else
        {
            total=total_1+3;
            total_1=total;
            sum=sum+total;
        }
    }
    printf("%d",sum);
}
