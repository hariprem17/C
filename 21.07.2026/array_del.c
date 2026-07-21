//delete element

#include<stdio.h>

void main()
{
    int a[]={10,20,30,40,50};
    int k=sizeof(a)/sizeof(a[0]);
    int n;
    printf("enter a element to delete");
    scanf("%d",&n);
    int temp=0;

    for(int i=0;i<k;i++)
    {
        if(a[i]==n)
        {
            temp=i;
            break;
        }
    }
    for(int j=temp+1;j<k;j++)
    {
        a[j-1]=a[j];
    }
    k--;
    for(int z=0;z<k;z++)
    {
        printf("%d ",a[z]);
    }

}
