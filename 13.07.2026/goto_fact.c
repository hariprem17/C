#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int i=n;

    int fact=1;

    print:
        fact=fact*n;
        n--;

        if(n>=1)
        {
            goto print;
        }
    printf("factorial of %d is %d",i,fact);

}
