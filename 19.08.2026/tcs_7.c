#include<stdio.h>

void main()
{
    int n;
    printf("enter term of series:");
    scanf("%d",&n);
    int sum1=0,sum2=0;

    for(int i=1;i<=n;i++)
    {
        if(i%2!=0 && i!=1)
        {
            sum1=sum1+7;
        }
        else if(i%2==0 && i!=2)
        {
            sum2=sum2+6;
        }
    }
    if(n%2!=0)
    {
        printf("%d term is %d",n,sum1);
    }
    else if(n%2==0)
    {
        printf("%d term is %d",n,sum2);
    }
}
