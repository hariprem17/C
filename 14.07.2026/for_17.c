#include<stdio.h>

void main()
{
    int a,b;
    printf("enter a starting range:");
    scanf("%d",&a);

    printf("enter a ending range:");
    scanf("%d",&b);

    for(int i=a;i<=b;i++)
    {
        int c=i;
        int w=1;
        for(int j=2;j<c;j++)
        {
            if(c%j==0)
            {
                w=0;
            }
        }
        if(w==1)
        {
            printf(" %d",i);
        }
    }
}
