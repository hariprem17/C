//most frequent
#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,1,2,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    int count2=0,freq;
    for(int i=0;i<n;i++)
    {
        int count1=0;
        int visited=0;
        for(int k=0;k<i;k++)
        {
            if(a[i]==a[k])
            {
                visited=1;
                break;
            }
        }
        if(visited==0)
        {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count1=count1+1;

            }

        }

        if(count1>count2)
        {
            freq=a[i];
            count2=count1;
        }
        }
    }
    printf("%d",freq);

}
