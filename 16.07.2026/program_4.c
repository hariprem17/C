#include<stdio.h>

void main()
{
    int n;
    printf("enter a mints in first kid:");
    scanf("%d",&n);

    int m;
    printf("number of persons in queue:");
    scanf("%d",&m);

    int total=n,current;

    for(int i=2;i<=m;i++)
    {
       current=total-1;
       total=total+current;
    }
    printf("%d",total);
}
