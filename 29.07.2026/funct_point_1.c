#include<stdio.h>

int* sortarray(int arr[],int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}
void main()
{
    int a[]={5,3,7,2,1};
    int* result;
    result=sortarray(a,5);

    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}
