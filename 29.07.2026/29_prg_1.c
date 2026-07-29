#include<stdio.h>

void main()
{
    int a[5][2]={
        {2,5},
        {2,6},
        {2,2},
        {2,4},
        {2,1},
};
int temp;
for(int i=0;i<5;i++)
{
    for(int j=0;j<5-i-1;j++)
    {
      if(a[j][1]>a[j+1][1])
      {
          temp=a[j][1];
          a[j][1]=a[j+1][1];
          a[j+1][1]=temp;

          temp=a[j][0];
          a[j][0]=a[j+1][0];
          a[j+1][0]=temp;
      }
    }
}
for(int i=0;i<5;i++)
{
    printf("(%d,%d)",a[i][0],a[i][1]);
}
}
