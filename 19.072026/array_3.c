#include<stdio.h>

void main()
{
    int n;
    printf("enter number of students:");
    scanf("%d",&n);

    int a[n],sum=0;
    float m=n;

    for(int i=0;i<n;i++)
    {
        printf("enter a height of student %d:",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %d",sum);
    printf("\naverage is %f",sum/m);
}
