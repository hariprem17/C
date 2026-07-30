#include<stdio.h>
int comp(int *arr1,int *arr2,int n1,int n2)
{
    int *p=arr1;
    int *q=arr2;

    int flag=1;
    for(int i=0;i<n1;i++)
    {
        if(n1!=n2)
        {
            flag=0;
        }
        else if(*p!=*q)
        {
            flag=0;
        }
        else
        {
            p++;
            q++;
        }
    }
    return flag;
}
void main()
{
    int a[]={1,2,3,4,5};
    int b[]={1,2,3,5};

    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);

    int result=comp(a,b,n1,n2);

    printf("%d",result);
}
