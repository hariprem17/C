#include<stdio.h>

void main()
{
    int s;
    printf("enter number of guards standing:");
    scanf("%d",&s);
    int sum=0,total,total_1;

    for(int i=1;i<=s;i++)
    {
        if(i==1)
        {
            total_1=6;
            sum=total_1;
        }
        else
        {
            total=total_1+4;
            total_1=total;
            sum=sum+total;
        }
    }
    printf("%d",sum);
}
