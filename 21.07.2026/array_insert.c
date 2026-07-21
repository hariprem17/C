//insert element
#include<stdio.h>

void main()
{
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    int m=n;

    int b;
    printf("enter a element to insert:");
    scanf("%d",&b);
    int temp=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]<b)
        {
            temp=i;
        }
    }
    n=n+1;
    if(temp!=0)
    {
     for(int j=m-1;j>=temp+1;j--)
     {
        a[j+1]=a[j];
     }
    }
    else if(temp==0)
    {
      for(int l=m-1;l>=temp;l--)
      {
        a[l+1]=a[l];
      }
    }
    if(temp!=0)
    {
      a[temp+1]=b;
    }
    else if(temp==0)
    {
        a[temp]=b;
    }

    for(int z=0;z<n;z++)
    {
        printf("%d ",a[z]);
    }
}
