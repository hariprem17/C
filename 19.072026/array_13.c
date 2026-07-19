#include<stdio.h>

void main()
{
    int a[]={10,20,30,10,50,20,20};
    int n=sizeof(a)/sizeof(a[0]);
    int visited=0;

    for(int i=0;i<n;i++)
    {
        int visited=0;
        for(int k=0;k<i;k++)
        {
            if(a[i]==a[k])
            {
                visited=1;
            }
        }
        if(visited==0)
        {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
             if(a[i]==a[j])
             {
                printf("%d \n",a[i]);
                break;
             }
            }
         }
        }
    }
}
