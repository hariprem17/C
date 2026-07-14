#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int count=0,rem,ans=0,temp=n,o=n;

    while(temp>0)
    {
        temp=temp/10;
        count++;
    }


    for(int i=0;i<count;i++)
    {
        int mul=1;
        rem=n%10;

        for(int j=0;j<count;j++)
        {
            mul=mul*rem;
        }

        ans=ans+mul;
        n=n/10;
    }
    if(o==ans)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong");
    }
}
