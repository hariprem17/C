#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    char a[50];
    char b[]={'A','B','C','D','E','F'};

    int i=0,rem;

    while(n>0)
    {
        rem=n%16;
        a[i]=rem;
        n=n/16;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        if(a[j]<10)
        {
           printf("%d ",a[j]);
        }
        else if(a[j]>=10 && a[j]<16)
        {
            printf("%c",b[a[j]%10]);
        }
    }
}
