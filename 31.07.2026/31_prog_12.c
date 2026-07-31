#include<stdio.h>

void main()
{
    int a[]={1,4,52,6,0,19};
    int n=sizeof(a)/sizeof(a[0]);
    int len=n;
    for(int i=0;i<n;i++)
    {
        int sum=0,count=0;
        for(int j=i;j<n;j++)
        {
            if(sum>51)
            {
                break;
            }
            else
            {
                sum=sum+a[j];
                count=count+1;
            }
        }

        if(sum>51 && count<=len)
        {
            len=count;
        }
    }
    printf("%d",len);
}
