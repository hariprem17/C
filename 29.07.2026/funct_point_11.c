#include<stdio.h>

void sort(int *arr1,int *arr2,int n1,int n2)
{
    int *l=arr1+n1;
    int *f=arr2;

    for(int i=0;i<n2;i++)
    {
        *l=*f;
        l++;
        f++;
    }
    int temp;
    for(int i=0;i<n1+n2-1;i++)
    {
        for(int j=0;j<n1+n2-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
}
void main()
{
    int a[13]={6,7,8,9,10};
    int b[]={1,2,3,4,5,12,13,100};
    int n1=5;
    int n2=sizeof(b)/sizeof(b[0]);


    sort(a,b,n1,n2);

    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",a[i]);
    }
}
