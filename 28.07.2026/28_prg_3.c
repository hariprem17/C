#include<stdio.h>

void main()
{
    int a[5][2]={
      {2,1},
      {5,1},
      {2,1},
      {5,1},
      {2,1},
    };

    for(int i=0;i<5;i++)
    {
        int visit=0;
        int count=0;
        for(int k=0;k<i;k++)
        {
            if(a[i][0]==a[k][0] && a[i][1]==a[k][1])
            {
                visit=1;
            }
        }
        if(visit==0)
        {
        for(int j=0;j<5;j++)
        {
            if(a[i][0]==a[j][0] && a[i][1]==a[j][1])
            {
                count=count+1;
            }
        }
        if(count>1)
        {
        printf("(%d,%d) present %d times\n",a[i][0],a[i][1],count);
        }
        }
    }

}
