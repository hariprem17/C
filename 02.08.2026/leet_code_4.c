#include<stdio.h>

int main()
{
    int a[]={1,3,5,7,8};
    int n=sizeof(a)/sizeof(a[0]);

    int left=0;
    int right=n-1;
    int mid,index=-1,target=6;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(a[mid]==target)
        {
            printf("endex is %d",mid);
            return 0;
        }
        else if(a[mid]<target)
        {
            left=mid+1;
        }
        else if(a[mid]>target)
        {
             right=mid-1;
        }


    }
        printf("index is %d",left);
    }


