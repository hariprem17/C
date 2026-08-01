#include<stdio.h>

void main()
{
    int a[]={3,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    int pivot;
    int sum=100;
    for(int i=n-1;i>0;i--)
    {
        if(a[i]>a[i-1])
        {
            pivot=i-1;
            break;
        }
    }
    int min=a[pivot+1];
    int index=pivot+1;
    for(int j=pivot+1;j<n;j++)
    {
        if(a[j]<min && a[j]>a[pivot])
        {
            min=a[j];
            index=j;
        }
    }

    int temp=a[pivot];
    a[pivot]=a[index];
    a[index]=temp;


    int left=pivot+1;
    int right=n-1;

    while(left<right)
    {
        int temp=a[left];
        a[left]=a[right];
        a[right]=temp;

        left++;
        right--;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


}
