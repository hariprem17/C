//Search Insert Position
#include<stdio.h>

void main()
{
    int a[]={1,3,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int target=7;

    for(int i=0;i<n;i++)
    {
        if(a[i]>=target)
        {
            printf("Insert Position:%d",i);
            break;
        }
        if(target>a[n-1])
        {
            printf("Insert Position:%d",n);
            break;
        }
    }
}
