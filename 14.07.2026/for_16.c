#include<stdio.h>

void main()
{
    int a,b;
    printf("enter a starting range:");
    scanf("%d",&a);

    printf("enter a ending range:");
    scanf("%d",&b);

    for(int i=a;i<=b;i++)
    {
        int count=0,ans=0;
        int c=i;
        int d=i;
        while(c>0)
        {
            c=c/10;
            count++;
        }
       while(d>0)
       {
         int mul=1;
         int rem=d%10;

        for(int j=0;j<count;j++)
        {
            mul=mul*rem;
        }
        ans=ans+mul;
        d=d/10;
       }
      if(i==ans)
      {
          printf(" %d ",ans);
      }
    }
}
