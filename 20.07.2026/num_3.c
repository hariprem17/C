//decimal to hexa
#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int rem,i=0;
    int a[50];

    while(n>0)
    {
        rem=n%16;
        a[i]=rem;
        n=n/16;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        if(a[j]>=0 && a[j]<10)
        {
           printf("%d ",a[j]);
        }
        else if(a[j]>=10 && a[j]<16)
        {
            printf("%c",a[j]-10+65);
        }

    }
}
