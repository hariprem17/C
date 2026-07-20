//binary to decimal
#include<stdio.h>
#include<math.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int dec=0,rem,i=0;
    while(n>0)
    {
        rem=n%10;
        if(rem==1)
        {
            dec=dec+(int)(pow(2,i));
        }
        n=n/10;
        i++;
    }
    printf("%d",dec);
}

