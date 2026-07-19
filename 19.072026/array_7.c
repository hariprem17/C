#include<stdio.h>

void main()
{
    int a[]={0,1,2,3,4,5,6,7,8,9,10,11};
    int n=sizeof(a)/sizeof(a[0]);
    int count_o=0,count_e=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count_o+=1;
        }
        else if(a[i]%2==0)
        {
            count_e+=1;
        }
        else if(a[i]%2!=0)
        {
            count_o+=1;
        }
    }
    printf("%d %d",count_e,count_o);
}
