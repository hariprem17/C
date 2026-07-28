#include<stdio.h>

void main()
{
    int a[4][2]={
       {2,3},
       {3,7},
       {3,1},
       {2,3},
    };
    int result[4][2];
    int k=0;

    for(int i=0;i<4;i++)
    {
        int duplicate=0;
        for(int j=0;j<k;j++)
        {
            if(a[i][0]==a[j][0] && a[i][1]==a[j][1])
            {
                duplicate=1;
                break;
            }
        }

        if(duplicate==0)
        {
            result[k][0]=a[i][0];
            result[k][1]=a[i][1];
            k++;
        }
    }

    for(int i=0;i<k;i++)
    {
        printf("(%d,%d)\n",result[i][0],result[i][1]);
    }
}
