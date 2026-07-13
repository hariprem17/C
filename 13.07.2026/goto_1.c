#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int i=2;
    print:
        printf("%d \n",i);
        i=i+2;

        if(i<=n)
        {
            goto print;
        }
}
