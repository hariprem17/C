#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,2,1,2,1,3};
    int n=sizeof(a)/sizeof(a[0]);
    int count=0;

    for(int i=0;i<n;i++)
    {
        int visited=0;
        for(int s=0;s<i;s++)
        {
            if(a[i]==a[s])
            {
                visited=1;
                break;
            }

        }
        if(visited==0)
        {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
                break;
            }
        }
    }
  }
  printf("%d",count);
}
