#include<stdio.h>

void main()
{
    float n,frac,sum=0;
    printf("enter a range:");
    scanf("%f",&n);

    for(int i=1;i<=n;i++)
    {
        frac=1.0/i;
        sum=sum+frac;
    }
    printf("%f",sum);
}
