#include<stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
//upper part
    for(int i=1;i<=n;i++)
    {
       for(int s=0;s<(n-(i-1));s++)
       {
           printf(" ");
       }
       for(int j=1;j<=i;j++)
       {
           if(j==1)
           {
               printf("* ");
           }
           else if(j>1 && j<i)
           {
               printf("  ");
           }
           else
           {
               printf("* ");
           }

       }
       printf("\n");
    }
    //lower part
     for(int i=n-1;i>0;i--)
    {
       for(int s=0;s<(n-(i-1));s++)
       {
           printf(" ");
       }
       for(int j=1;j<=i;j++)
       {
           if(j==1)
           {
               printf("* ");
           }
           else if(j>1 && j<i)
           {
               printf("  ");
           }
           else
           {
               printf("* ");
           }

       }
       printf("\n");
    }
}
