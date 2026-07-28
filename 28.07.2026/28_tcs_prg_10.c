#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    int r;

    printf("enter no of elements to rotate:");
    scanf("%d",&r);
    int k=0;
    for(int i=n-r;i<n;i++)
    {
        b[k]=a[i];
        k++;
    }

    for(int i=0;i<r;i++)
    {
        for(int j=n-r+i;j>0;j--)
        {
            a[j]=a[j-1];
        }
    }



    for(int i=0;i<r;i++)
    {
        a[i]=b[i];
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
