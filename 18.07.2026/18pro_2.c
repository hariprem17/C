#include<stdio.h>

void main()
{
    int n;
    printf("enter a number of trips:");
    scanf("%d",&n);
    int upward=4,downward=2,total=0;

    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            total=total+upward;
            upward=upward+4;
        }
        else
        {
            total=total-downward;
            downward=downward+1;
        }
    }
    printf("%d",total);
}
