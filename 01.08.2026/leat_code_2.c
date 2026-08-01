//34. Find First and Last Position of Element in Sorted Array
#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int target=4;
    int index1=-1,index2=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            index1=i;
            break;
        }
    }
    for(int j=n-1;j>=0;j--)
    {
        if(a[j]==target)
        {
            index2=j;
            break;
        }
    }

    printf("[%d,%d]",index1,index2);
}
