#include<stdio.h>

void main()
{
    int a[]={2, 5, 7, 3, 4, 6, 8,1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);

    int max=0;
    for(int i=0;i<n-1;i++)
    {

        int len=0;
        for(int j=i;j<n-1;j++)
        {
            if(a[j]%2==0)
            {
                len=len+1;
            }
            else
            {
                break;
            }
        }
        if(len>max)
        {
            max=len;
        }
    }
    printf("max len is %d",max);



}

