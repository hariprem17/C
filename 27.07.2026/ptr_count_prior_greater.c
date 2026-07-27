#include<stdio.h>

void main()
{
    int r;
    printf("enter a size:");
    scanf("%d",&r);
    int a[r];

    for(int i=0;i<r;i++)
    {
        int *p=&a[i];
        printf("enter a element %d:",i+1);
        scanf("%d",&*p);
    }
    for(int i=0;i<r;i++)
    {
        int *p=&a[i];
        printf("%d ",*p);
    }

    int *p1=&a[0];
    int count=1;
    for(int i=0;i<r;i++)
    {
        int *p2=&a[i];
        if(*p2>*p1)
        {
            count=count+1;
            *p1=*p2;
        }

    }

    printf("\ncount is %d",count);

}
