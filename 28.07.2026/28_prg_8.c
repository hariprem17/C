#include<stdio.h>

void main()
{
    int a[4][2]={
       {2,3},
       {3,7},
       {3,1},
       {3,4},
    };

    int b[4][2]={
       {2,3},
       {9,7},
       {3,3},
       {3,1},
    };
    int c[4][2]={

    };
    int d=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][0]==b[j][0] && a[i][1]==b[j][1])
            {
               c[d][0]=a[i][0];
               c[d][1]=a[i][1];
               d++;
            }
        }
    }
    for(int i=0;i<d;i++)
    {
        printf("(%d,%d)",c[i][0],c[i][1]);
    }
}
