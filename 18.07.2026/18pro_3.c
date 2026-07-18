#include<stdio.h>

void main()
{
    int n;
    printf("enter number of rounds:");
    scanf("%d",&n);
    int wins=10,lose=3,total=0;

    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            total=total+wins;
            wins=wins+5;
        }
        else
        {
            total=total-lose;
            lose=lose+2;
        }
    }
    printf("%d",total);
}
