#include<stdio.h>

void main()
{
    int a[]={5,-1,2,-4,3};
    int n=sizeof(a)/sizeof(a[0]);
    int target=0;
    int index1,index2,index3,index4,sum=100;
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            for(int z=j+1;z<n-1;z++)
            {
                for(int k=z+1;k<n;k++)
                {
                   int diff=abs((a[i]+a[j]+a[z]+a[k])-target);

                   if(diff<sum)
                   {
                       sum=diff;
                       index1=i;
                       index2=j;
                       index3=z;
                       index4=k;
                   }
                }
            }
        }
    }
    printf("[%d,%d,%d,%d]",a[index1],a[index2],a[index3],a[index4]);
}
