#include<stdio.h>

void main()
{
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(a[0]);


    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(a+i)); //* prints value in the address stored
    }
}
