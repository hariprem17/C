#include<stdio.h>

void main()
{
    int a[]={6,5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int missing;
    for(int i=0;i<=n;i++)
    {
        int found=0;
        for(int j=0;j<n;j++)
        {
            if((i+1)==a[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
         missing=i+1;
         break;
        }
    }
    printf("missing smallest positive num is %d",missing);
}
