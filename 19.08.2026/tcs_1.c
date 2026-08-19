#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int path[]= {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    char busstop[][3]={"TH","GA","IC","HA","TE","LU","NI","CA"};

    int len=sizeof(busstop)/sizeof(busstop[0]);
    float sum=0.0;
    int count=0;
    float total_fair;
    int found1=0,found2=0;

    char stop1[3],stop2[3];
    printf("enter a stop 1:");
    scanf("%s",stop1);

    printf("enter a stop 2:");
    scanf("%s",stop2);

    if(strcmp(stop1,stop2)==0)
    {
        printf("INVALID INPUT");
        return 0;
    }

    for(int i=0;i<len;i++)
    {
       if(strcmp(stop1,busstop[i])==0)
       {
           found1=1;
       }
       if(strcmp(stop2,busstop[i])==0)
       {
           found2=1;
       }
    }

    if(found1==0 || found2==0)
    {
        printf("INVALID INPUT");
        return 0;
    }


    for(int i=0;i<len;i++)
    {
        if(strcmp(stop1,busstop[i])==0)
        {
            int j=i;
            do
            {
               sum=sum+path[(j+1)%len];
               j=(j+1)%len;
               count=count+1;

            }while(strcmp(busstop[j],stop2)!=0);

            total_fair=round((sum/1000)*count);
            printf("%.0f INR",total_fair);
            return 0;

        }
    }
}
