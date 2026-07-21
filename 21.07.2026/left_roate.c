//left rotate by n

#include<stdio.h>

void main()
{
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n],m=0;
    int k;
    printf("enter k element:");
    scanf("%d",&k);

    for(int i=0;i<k;i++)
    {
        b[i]=a[i];
        m++;
    }
    for(int j=0;j<k;j++)
    {
        for(int p=k-j;p<n;p++)
        {
            a[p-1]=a[p];
        }
    }
    for(int i=0;i<k;i++)
    {
        a[n-k+i]=b[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
