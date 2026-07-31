#include<stdio.h>

void main()
{
    int a[]={-7, 1, 5, 2, -4, 3, 0};
    int n=sizeof(a)/sizeof(a[0]);
    int index;
    for(int i=0;i<n;i++)
    {
        int left=i;
        int right=i+1;
        int sum1=0,sum2=0;
        for(int j=0;j<left;j++)
        {
            sum1=sum1+a[j];
        }

        for(int z=right;z<n;z++)
        {
            sum2=sum2+a[z];
        }

        if(sum1==sum2)
        {
            index=i;
            break;
        }
    }
    printf("equilibrium is %d",index);
}
