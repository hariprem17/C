#include<stdio.h>

void main()
{
    int a[4][2]={
       {2,3},
       {3,7},
       {3,1},
       {3,4},
    };

    int temp;
    for(int i=0;i<4/2;i++)
    {
        temp=a[i][0];
        a[i][0]=a[3-i][0];
        a[3-i][0]=temp;

        temp=a[i][1];
        a[i][1]=a[3-i][1];
        a[3-i][1]=temp;
    }

    for(int i=0;i<4;i++)
    {
        printf("(%d,%d)\n",a[i][0],a[i][1]);
    }
}
