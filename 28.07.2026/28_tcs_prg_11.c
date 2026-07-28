#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,5,6};
    int b[]={3,6};

    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    int count=0;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n1;j++)
        {
            if(b[i]==a[j])
            {
                count=count+1;
                break;
            }
        }
    }
    if(count==n2)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
