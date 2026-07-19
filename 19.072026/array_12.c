#include<stdio.h>

void main()
{
    int a[]={20,10,30,10,20,10,50,10,90};

    int n=sizeof(a)/sizeof(a[0]);



    for(int i=0;i<n;i++)
    {
        int count=0;
        int visited=0;
        for(int k=0;k<i;k++)
        {
            if(a[k]==a[i])
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
        }
        if(visited==0)
        {
            printf("Frequency of %d is %d \n",a[i],count);
         }
    }

}
