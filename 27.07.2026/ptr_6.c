#include<stdio.h>

void main()
{
    int w;
    printf("enter a weight of clothes in grams:");
    scanf("%d",&w);
    if(w==0)
    {
        printf("time estimated(min):0");
    }
    else if(w>0 && w<=2000)
    {
        printf("time estimates(min):25");
    }
    else if(w>2000 && w<=4000)
    {
        printf("time estimates(min):35");
    }
    else if(w>4000 && w<=7000)
    {
        printf("time estimates(min):45");
    }
    else if(w>7000)
    {
        printf("overloaded");
    }
    else
    {
        printf("invalid input");
    }

}
