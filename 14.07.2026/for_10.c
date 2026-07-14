#include<stdio.h>

void main()
{
    int a;
    float n;
    printf("enter a exponantial range:");
    scanf("%d",&a);

    printf("enter a number:");
    scanf("%f",&n);

    int p=n;

    for(int i=1;i<=a;i++)
    {
        printf("%f \n",1/n);
        n=n*p;

    }


}

