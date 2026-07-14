#include<stdio.h>

void main()
{
    int a,n;
    printf("enter a exponantial range:");
    scanf("%d",&a);

    printf("enter a number:");
    scanf("%d",&n);

    int p=n;

    for(int i=1;i<=a;i++)
    {
        printf("%d \n",n);
        n=n*p;

    }


}
