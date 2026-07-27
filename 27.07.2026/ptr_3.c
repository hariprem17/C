#include<stdio.h>

void main()
{
    int n;
    printf("enter number of ballon sell:");
    scanf("%d",&n);
    char b[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter a color of ballon at %d time:",i+1);
        scanf(" %c",&b[i]);
    }

    for(int i=0;i<n;i++)
    {
       printf(" %c ",b[i]);
    }

    for(int i=0;i<n;i++)
    {
        int count=0;
        int visited=0;
        for(int k=0;k<i;k++)
        {
            if(b[i]==b[k])
            {
                visited=1;
                break;
            }
        }
        if(visited==0)
        {
        for(int j=0;j<n;j++)
        {
          char *p1=&b[i];
          char *p2=&b[j];
          if(tolower(*p1)==tolower(*p2))
          {
            count=count+1;
          }
        }
        if(count%2!=0)
        {
            printf("\n%c is present %d (odd times)\n",b[i],count);
        }
        }
    }
}
