#include<stdio.h>

void main()
{
    int n,a;
    printf("enter a exponatial range:");
    scanf("%d",&n);

    printf("enter a number:");
    scanf("%d",&a);

    int i=1,p=a;

    print:
        printf("%d\n",a);
        a=a*p;
        i++;

        if(i<=n)
        {
            goto print;
        }



}

