#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a=0,b=1,temp;

    for(int i=1;i<n;i++)
    {
        if(a==0)
        {
            printf("%d",a);
        }
        temp=a+b;
        a=b;
        b=temp;

        printf(" %d",temp);
    }
}
