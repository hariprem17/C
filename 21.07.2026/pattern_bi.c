#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int m=1;
    int a=1;
    int b=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(m%2==0)
            {
                printf("%d",b);
            }
            else
            {
                printf("%d",a);
            }
            m++;
        }

        printf("\n");
    }
}
