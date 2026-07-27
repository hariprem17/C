#include<stdio.h>
#include<math.h>

int main()
{
    int a[3][3];
    int b[3];

    for(int i=0;i<3;i++)
    {
        printf("enter a oxygen level:\n");
        for(int j=0;j<3;j++)
        {
            printf("person %d at round %d:",i+1,j+1);
            scanf("%d",&a[i][j]);

            if(a[i][j]<1 || a[i][j]>100)
            {
                printf("invalid input");
                return 0;
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
           sum=sum+a[i][j];
        }
        b[i]=round(sum/3.0);
    }
    printf("Average of oxygen level:\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ",b[i]);
    }

    int max=0;
    for(int i=0;i<3;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }

    for(int i=0;i<3;i++)
    {
        if(max<70)
        {
            printf("all trainers are unfit");
            break;
        }
        else if(max==b[i])
        {
            printf("\ntrainee :%d",i+1);
        }
    }
}
