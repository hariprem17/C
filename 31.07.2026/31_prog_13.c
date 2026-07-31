#include<stdio.h>

void main()
{
    int a[]={2,2,2,3,3,3,3,3,3,3,1,2,2};
    int n=sizeof(a)/sizeof(a[0]);
    int found=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        int visited=0;
        for(int k=0;k<i;k++)
        {
            if(a[k]==a[i])an
            {
                visited=1;
            }
        }
        if(visited==0)
        {

        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
            }
        }
        if(count>n/2)
        {
            printf("%d",a[i]);
            found=1;
            break;
        }

        }
    }
    if(found==0)
    {
        printf("no majority");
    }
}
