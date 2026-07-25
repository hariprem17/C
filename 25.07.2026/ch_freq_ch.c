//Count the frequency of each character.

#include<stdio.h>

void main()
{
    char a[30];
    printf("enter a string:");
    gets(a);
    int len=strlen(a);
    char b[len];

    for(int i=0;i<len;i++)
    {
      int count =0;
      int visited=0;
      for(int k=0;k<i;k++)
      {
          if(a[i]==a[k])
          {
              visited=1;
          }
      }
      if(visited==0)
      {

      for(int j=0;j<len;j++)
      {
          if(a[i]==a[j])
          {
              count=count+1;
          }
      }
      printf("count of %c is %d\n",a[i],count);
      }
    }
}
