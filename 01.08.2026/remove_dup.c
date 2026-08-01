#include<stdio.h>

void main()
{
    int a[]={0,0,1,1,2,2,2,3,3};
    int n=sizeof(a)/sizeof(a[0]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
                for(int z=j;z<n;z++)
                {
                    a[z]=a[z+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("total duplicate count is %d\n",count);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
