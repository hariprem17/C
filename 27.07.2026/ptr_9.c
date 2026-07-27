#include<stdio.h>

void main()
{
    int in,ex;
    printf("enter no.of interior walls:");
    scanf("%d",&in);
    printf("enter no.of exterior walls:");
    scanf("%d",&ex);

    float a[in],b[ex];

    for(int i=0;i<in;i++)
    {
        printf("enter surface area of wall %d:",i+1);
        scanf("%f",&a[i]);
    }
    for(int i=0;i<ex;i++)
    {
        printf("enter surface area of wall %d:",i+1);
        scanf("%f",&b[i]);
    }

    float cost=0;
    for(int i=0;i<in;i++)
    {
        cost=cost+18*a[i];
    }
    for(int j=0;j<ex;j++)
    {
        cost=cost+12*b[j];
    }

    printf("total estimates cost:%f INR",cost);

}
