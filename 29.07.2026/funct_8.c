#include<stdio.h>
#include<math.h>

void arm(int a)
{
    int num=a,b=a;
    int count=0;
    while(a>0)
    {
        count=count+1;
        a=a/10;
    }
    int rem;
    int t_sum=0;
    while(num>0)
    {
        int sum=1;
        rem=num%10;
        sum=pow(rem,count);
        t_sum=t_sum+sum;
        num=num/10;
    }

    if(t_sum==b)
    {
        printf("%d is armstrong\n",b);
    }
    else
    {
        printf("%d is not armstrong\n",b);
    }
}

void perf(int k)
{
    int sum=0;
    for(int i=1;i<k;i++)
    {
        if(k%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==k)
    {
        printf("%d is perfect numbers\n",k);
    }
    else
    {
        printf("%d is not perfect\n",k);
    }
}

void main()
{
    int n,a;
    printf("enter a number:");
    scanf("%d",&n);

    printf("enter a perfect num:");
    scanf("%d",&a);

    arm(n);
    perf(a);
}
