#include<stdio.h>

void main()
{
    int a[]={1,4,45,6,0,19};
    int n=sizeof(a)/sizeof(a[0]);
    int x;
    printf("enter x:");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {

              if(a[i]+a[j]>x)
              {
                  printf("%d,%d ",a[i],a[j]);
                  break;
              }

            }
        }
    }
}
