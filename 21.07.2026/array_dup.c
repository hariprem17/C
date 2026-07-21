//array duplicate

#include<stdio.h>

void main()
{
    int a[]={1,2,3,2,4,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    int k[n];
    int count=0;


    for(int i=0;i<n;i++)
    {
        int visited=0;
        for(int s=i;s<n-1;s++)
        {
            if(a[i]==k[s])
            {
               visited=1;
               break;
            }
            else if(a[i]!=k[s])
            {
                k[s]=a[i];
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
        }
    }
    printf("%d",count);
}

