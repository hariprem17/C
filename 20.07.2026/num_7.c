//binary to hexadecimal
//binary to decimal to hexa

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

    int k=0;
    int a[50],re;
    while(dec>0)
    {
        re=dec%16;
        a[k]=re;
        dec=dec/16;
        k++;
    }
    for(int j=k-1;j>=0;j--)
    {
        if(a[j]>=0 && a[j]<10)
        {
          printf("%d",a[j]);
        }
        else if(a[j]>=10 && a[j]<16)
        {
            printf("%c",a[j]-10+65);
        }
    }
}



