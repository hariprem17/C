#include<stdio.h>

void main()
{
    int n;
    printf("enter a number of elements:");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("enter a element %d:",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
            }
        }
        if(count==1)
        {
            printf("first non-repeating element is %d",a[i]);
            break;
        }
    }
}
