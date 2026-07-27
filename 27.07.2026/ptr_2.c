#include<stdio.h>

void main()
{
    int t;
    printf("enter no of hours:");
    scanf("%d",&t);
    int e[t];
    int l[t];

    for(int i=0;i<t;i++)
    {
        printf("Enter no.of entry in hour %d:",i+1);
        scanf("%d",&e[i]);
        printf("Enter no.of leave in hour %d:",i+1);
        scanf("%d",&l[i]);
    }
    int sum=0;
    int max=0;
    for(int i=0;i<t;i++)
    {
        int *p1=&e[i];
        int *p2=&l[i];

        sum=sum+ *p1- *p2;
        if(sum>max)
        {
            max=sum;
        }
    }
    printf(" the maximum number of guests within 5 hours is %d",max);

}
