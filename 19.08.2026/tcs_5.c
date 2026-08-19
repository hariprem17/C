#include<stdio.h>

void main()
{
    int n;
    printf("enter number of patient:");
    scanf("%d",&n);
    int sum=0;

    int ages[n];

    for(int i=0;i<n;i++)
    {
        printf("enter a age of patient %d:",i+1);
        scanf("%d",&ages[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(ages[i]<17)
        {
            sum=sum+200;
        }
        else if(ages[i]>17 && ages[i]<=40)
        {
            sum=sum+400;
        }
        else if(ages[i]>40)
        {
            sum=sum+300;
        }
    }
    printf("Total income:%dINR",sum);
}
