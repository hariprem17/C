#include<stdio.h>

void main()
{
    int n;
    printf("enter number of chocolate packets:");
    scanf("%d",&n);

    int a[n];
    int b[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        printf("enter a chocolate in packet %d:",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            b[j]=a[i];
            j++;
        }
    }

    for(int i=j;i<n;i++)
    {
        b[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}
