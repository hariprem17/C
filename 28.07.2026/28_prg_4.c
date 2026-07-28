#include<stdio.h>

void main()
{
    int a[4][2]={
      {2,3},
      {4,3},
      {5,1},
      {7,3},
    };
    int max=0;
    int i=0,index;
    while(i<4)
    {
           if(a[i][0]+a[i][1]>max)
           {
               max=a[i][0]+a[i][1];
               index=i;
           }
     i++;
    }
    printf("maximum sum is (%d,%d)",a[index][0],a[index][1]);
}
