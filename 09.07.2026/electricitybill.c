#include<stdio.h>

void main()
{
    int n;
    printf("enter total units consumed=");
    scanf("%d",&n);

    if(200>=n>0)
    {
        printf("Total amount is %d",n*3);
    }
    else if(200<n<=500)
    {
         printf("Total amount is %d",n*4);
    }
    else if(500<n<=1000)
    {
         printf("Total amount is %d",n*8);
    }
    else if(n>1000)
    {
         printf("Total amount is %d",n*10);
    }
}
