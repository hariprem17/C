// frequency of array elements

#include<stdio.h>

void main()
{
    int a[]={1,2,3,1,2,5};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        int count=0;
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
                count=count+1;
            }
        }
        printf("count of %d is %d \n",a[i],count);
        }
    }
}
