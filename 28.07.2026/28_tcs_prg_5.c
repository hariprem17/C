#include<stdio.h>

void main()
{
    int v,w;
    printf("enter total vehicles:");
    scanf("%d",&v);
    printf("enter total wheels:");
    scanf("%d",&w);
    int com=0;

    for(int i=v;i>=0;i--)
    {
        for(int j=0;j<=v;j++)
        {
            if(i+j==v)
            {
               if((i*2)+(j*4)==w)
              {
                  com=1;
                  printf("number of two whellers:%d\n",i);
                  printf("number of four whellers:%d\n",j);
              }

            }
        }
    }
    if(com==0)
    {
        printf("combination is invalid");
    }
}
