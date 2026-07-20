//octal to decimal to binary

#include<stdio.h>

void main()
{
    int n;
    printf("enter a octal number:");
    scanf("%d",&n);

    int i=0,rem,dec=0;
    while(n>0)
    {
        rem=n%10;
        dec=dec+rem*((int)(pow(8,i)));
        n=n/10;
        i++;
    }
    int k=0,re,a[50];
    while(dec>0)
    {
        re=dec%2;
        a[k]=re;
        dec=dec/2;
        k++;
    }
    for(int j=k-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}
