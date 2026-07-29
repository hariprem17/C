#include<stdio.h>


void bin(int a)
{
    int b[50];
    int i=0;
    int rem;
    while(a>0)
    {
        rem=a%2;
        b[i]=rem;
        a=a/2;
        i++;
    }

    for(int j=i-1;j>=0;j--)
    {
        printf("%d",b[j]);
    }
}
void main()
{
    int n;
    printf("enter a decimal number:");
    scanf("%d",&n);

    bin(n);
}
