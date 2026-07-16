#include<stdio.h>

void main()
{
    int n,m;
    printf("enter a starting range:");
    scanf("%d",&n);
    printf("enter a ending range:");
    scanf("%d",&m);

    for(int i=n;i<=m;i++)
    {
        if(m<10)
        {
            printf("%0d ",i);
        }
        else if( m<100)
        {
            printf("%02d ",i);
        }
        else if(m<1000)
        {
            printf("%03d ",i);
        }
    }
}
