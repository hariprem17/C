//array merge
#include<stdio.h>

void main()
{
    int a[]={6,7,8,9,10};
    int b[]={1,2,3,4,5};

    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    int k=n1+n2;
    int c[k];

    for(int i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(int j=n1;j<k;j++)
    {
        c[j]=b[j-n1];
    }

    int temp;
    for(int g=0;g<k;g++)
    {
        for(int h=g+1;h<k;h++)
        {
            if(c[h]<c[g])
            {
                temp=c[g];
                c[g]=c[h];
                c[h]=temp;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}
