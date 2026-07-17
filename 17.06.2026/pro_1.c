#include<stdio.h>

void main()
{
    int l;
    printf("enter a number of lamps:");
    scanf("%d",&l);

    int total,total_1,sum=0;

    for(int i=1;i<=l;i++)
    {
        if(i==1)
        {
            total_1=3;
            sum=sum+total_1;
        }
        else
        {
            total=total_1*2+2;
            total_1=total;
            sum=sum+total;
        }

    }
    printf("%d",sum);
}
