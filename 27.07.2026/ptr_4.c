#include<stdio.h>

void main()
{
    int j=10;
    int o;

    int sold=0;
    order:
    printf("Order candies:");
    scanf("%d",&o);

    int rem=j;


    if(o<=j)
    {
        sold=sold+o;
        rem=rem-o;
        printf("Number of candies sold:%d\n",sold);
        printf("Number of candies remaining:%d\n",rem);
        j=j-o;
    }
    else if(o>j)
    {
        printf("INVALID INPUT\n");
    }
    if(j<=5)
    {
        j=10;
        printf("JAR REFILLED\n");
    }

    goto order;
}
