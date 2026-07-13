#include<stdio.h>

void main()
{
    int a,rev=0,rem;
    printf("enter a number:");
    scanf("%d",&a);

    print:
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;

        if(a>0)
        {
            goto print;
        }
    printf("%d",rev);

}
