//right rotate by n

#include<stdio.h>

void main()
{
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n],m=0;
    int k;
    printf("enter k element:");
    scanf("%d",&k);

    for(int i=n-1;i>n-1-k;i--)
    {
        b[n-1-i]=a[i];
        m++;
    }
    for(int i=0;i<k;i++)
    {
        for(int j=n-k+i-1;j>=0;j--)
        {
            a[j+1]=a[j];
        }
    }

    for(int i=1;i<=k;i++)
    {
        a[k-i]=b[i-1];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}

