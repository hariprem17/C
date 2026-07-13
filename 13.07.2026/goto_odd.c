
#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int sum=0;int i=1;

    print:
        sum=sum+i;
        i=i+2;

        if(i<=n)
        {
            goto print;
        }
    printf("%d",sum);
}

