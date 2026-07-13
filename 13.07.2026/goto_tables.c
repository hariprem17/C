#include<stdio.h>

void main()
{
    int n;
    printf("enter a number=");
    scanf("%d",&n);

    int i=1;

    print:
        printf("%d*%d=%d\n",i,n,i*n);
        i++;

        if(i<=10)
        {
            goto print;
        }
}
