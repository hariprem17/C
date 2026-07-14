#include<stdio.h>

void main()
{
    int n,ans=0,sum=0;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        ans=ans*10+9;
        sum=sum+ans;
    }
    printf("%d",sum);
}
