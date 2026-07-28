#include<stdio.h>

void main()
{
    int n;
    printf("enter number of chocolate packets:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("enter a chocolate in packet %d:",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    int count=0;
    for(int i=0;i<n-count;i++)
    {
        if(a[i]==0)
        {
            count=count+1;
            for(int j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            a[n-count]=0;

        }
    }

    printf("\nlast:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
