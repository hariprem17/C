#include<stdio.h>

void main()
{
    int a[]={-1,0,1,2,-1,-4};
    int n=sizeof(a)/sizeof(a[0]);
    int index1,index2,index3,sum=100,target=1;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int z=j+1;z<n;z++)
            {
                int diff=abs((a[i]+a[j]+a[z])-target);
                if(diff<sum)
                {
                    sum=diff;
                    index1=i;
                    index2=j;
                    index3=z;
                }
            }
        }
    }
    printf("[%d,%d,%d]",a[index1],a[index2],a[index3]);
}
