#include<stdio.h>

void main()
{
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int found;
    for(int i=0;i<n;i++)
    {
        int left=i;
        int right=i+1;
        int lesser=0,greater=0;
        for(int j=0;j<left;j++)
        {
            if(a[j]>a[i])
            {
                lesser=1;
                break;
            }
        }
        if(lesser==0)
        {
        for(int z=right;z<n;z++)
        {
            if(a[z]<a[i])
            {
                greater=1;
                break;
            }
        }
        }

        if(lesser==0 && greater==0)
        {
            printf("pivot is %d",a[i]);
            found=0;
            break;
        }

    }
    if(found==0)
    {
        printf("no pivot");
    }

}
