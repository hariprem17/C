//binary to decimal
#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int dec=0,rem,i=1;
    while(n>0)
    {
        rem=n%10;
        if(rem==1)
        {
            dec=dec+i;
        }
        n=n/10;
        i=i*2;
    }
    printf("%d",dec);
}
