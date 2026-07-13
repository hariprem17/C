#include<stdio.h>

void main()
{
    int n;
    float a;
    printf("enter a exponatial range:");
    scanf("%d",&n);

    printf("enter a number:");
    scanf("%f",&a);

    int i=1,p=a;

    print:
        printf("%f\n",1/a);
        a=a*p;
        i++;

        if(i<=n)
        {
            goto print;
        }



}

