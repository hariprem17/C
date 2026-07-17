#include<stdio.h>

void main()
{
    int n;
    printf("enter steps:");
    scanf("%d",&n);

    int sum1=6,sum2=3,height=0;

    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            sum1=sum1+6;
            height=height+sum1;
        }
        else if(i%2!=0)
        {
            sum1=sum1+6;
            height=height+sum1;
        }
        else if(i%2==0)
        {
            sum2=sum2+3;
            height=height-sum2;
        }
    }

    printf("%d",height);
}
