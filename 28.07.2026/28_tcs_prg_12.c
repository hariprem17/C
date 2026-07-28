#include<stdio.h>

void main()
{
    int a[5][2]={
        {11, 20},
        {30, 40},
        {5, 10},
        {40, 30},
        {10, 5}
    };

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if((a[i][0]==a[j][1])&&(a[i][1]==a[j][0]))
            {
                printf("the symmetric pairs is(%d,%d)\n",a[i][0],a[i][1]);
            }
        }
    }
}
