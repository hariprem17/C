#include<stdio.h>

void main()
{
    int a[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(a)/sizeof(a[0]);


    int left=0;
    int right=n-1;
    int area;
    int max=0;
    while(left<right)
    {
        int height;

        if(a[left]<a[right])
        {
            height=a[left];
        }
        else
        {
            height=a[right];
        }
        int width=right-left;
        area=height*width;

        if(area>max)
        {
            max=area;
        }

        if(a[left]<a[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    printf("area is %d",max);
}
