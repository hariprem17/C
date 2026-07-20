//binary to octal
//binary-decimal-octal
#include<stdio.h>
#include<math.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    //binary to decimal
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
    //decimal to octal;
    int k=0;
    int a[50],re;
    while(dec>0)
    {
        re=dec%8;
        a[k]=re;
        dec=dec/8;
        k++;
    }
    for(int j=k-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
}



