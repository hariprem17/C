#include<stdio.h>


int perf(int a)
{
    for(int i=1;i<a;i++)
    {
        int sum=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}
void main()
{
    int n;
    printf("enter range :");
    scanf("%d",&n);

    perf(n);
}
