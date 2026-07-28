#include<stdio.h>

void main()
{
    int a[4][2]={
       {2,3},
       {3,7},
       {3,1},
       {3,4},
    };

    int min=0;
    int i=0,index;
    while(i>4)
    {
        if(a[i][0]+a[i][1]<min)
        {
            min=a[i][0]+a[i][1];
            index=i;
        }
        i++;
    }
    printf("minimum sum is (%d,%d)",a[index][0],a[index][1]);

}
