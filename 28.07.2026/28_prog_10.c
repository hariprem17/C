#include<stdio.h>

void main()
{
    int a[4][2]={
       {7,3},
       {1,7},
       {3,1},
       {2,3},
    };

    int temp;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[j][0]>a[j+1][0])
            {
                temp=a[j][0];
                a[j][0]=a[j+1][0];
                a[j+1][0]=temp;

                temp=a[j][1];
                a[j][1]=a[j+1][1];
                a[j+1][1]=temp;
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        printf("(%d,%d)",a[i][0],a[i][1]);
    }
}
