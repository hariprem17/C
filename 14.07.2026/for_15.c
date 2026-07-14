#include<stdio.h>

void main()
{
    int n,sqr,sum=0;
    printf("enter a number:");
    scanf("%d",&n);


    for(int i=1;i<=n;i++)
    {
        sqr=i*i;
        printf("%d ",sqr);
        sum=sum+sqr;
    }
    printf("\nsum is %d",sum);
}
