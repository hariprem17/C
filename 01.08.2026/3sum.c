#include<stdio.h>
//Input: nums = [-1,0,1,2,-1,-4]
//Output: [[-1,-1,2],[-1,0,1]]
void main()
{
    int a[]={-1,0,1,2,-1,-4};
    int n=sizeof(a)/sizeof(a[0]);
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int z=j+1;z<n;z++)
            {

                if(a[i]+a[j]+a[z]==0)
                {
                    printf("[%d,%d,%d]",a[i],a[j],a[z]);
                }


        }
    }
  }
}
