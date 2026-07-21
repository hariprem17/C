//unique element

#include<stdio.h>

void main()
{
    int a[]={2,3,4,2,5,3,8,9,2,3};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        int uni=0;
        int visited=0;
        for(int s=0;s<i;s++)
        {
            if(a[i]==a[s])
            {
                visited=1;
            }
        }
        if(visited==0)
        {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                uni=1;
            }
        }
        if(uni==0)
        {
            printf("%d ",a[i]);
        }
       }
}
}

