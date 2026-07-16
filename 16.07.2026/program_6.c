#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum1=1,sum2=1;
    for(int i=0;i<=n;i++)
    {
        if(i==0 || i==1)
        {
            printf("%d ",sum1);
        }
        else if(i%2==0)
        {
            sum1=sum1*2;
            printf("%d ",sum1);
        }
        else if(i%2!=0)
        {
            sum2=sum2*3;
            printf("%d ",sum2);
        }
    }
}
