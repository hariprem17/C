#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int i=1,sum=0;

    print:
        sum=sum+i;
        i++;

        if(i<=n)
        {
            goto print;
        }
    printf("%d",sum);

}
