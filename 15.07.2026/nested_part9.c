#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int m=n;

    for(int i=1;i<=n;i++)
    {
        if((i==1) ||(i==n))
        {
           for(int j=1;j<=n;j++)
           {
               printf("# ");
           }
        }
        else if(i>1 && i<m)
        {
            for(int z=1;z<=m;z++)
            {
                if(z==1)
                {
                    printf("# ");
                }
                else if(z>1 && z<n)
                {
                for(int s=0;s<m-(m-2);s++)
                {
                    printf(" ");
                }
                }
                else if(z==n)
                {
                    printf("#");
                }
            }
        }
        printf("\n");

    }
}
