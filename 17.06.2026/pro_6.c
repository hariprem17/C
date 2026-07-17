#include<stdio.h>

void main()
{
    int n;
    printf("enter number of steps:");
    scanf("%d",&n);
    int sum1=4,sum2=2,dist=0;

    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            sum1=sum1+4;
            dist=dist+sum1;
        }
        else if(i%2==0)
        {
            sum2=sum2+2;
            dist=dist-sum2;
        }
        else if(i!=2)
        {
            sum1=sum1+4;
            dist=dist+sum1;

        }
    }
    printf("%d",dist);

}
