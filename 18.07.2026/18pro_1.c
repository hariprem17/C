#include<stdio.h>

void main()
{
    int n;
    printf("enter number of days:");
    scanf("%d",&n);
    int w_add=15,w_rem=5,total=0;

    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            total=total+w_add;
            w_add=w_add+5;
        }
        else
        {
            total=total-w_rem;
            w_rem=w_rem+2;
        }
    }
    printf("%d",total);
}
