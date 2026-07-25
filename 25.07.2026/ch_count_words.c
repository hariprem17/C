//Count the number of words in a string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char a[10];
    printf("enter a paragraph:");
    fgets(a,sizeof(a),stdin);
    int len=strlen(a);
    int count =1;
    for(int i=0;i<len;i++)
    {
       if(a[i]==' ')
      {
          while(a[i]==' ')
        {
            i++;
        }
        if(!isdigit(a[i]))
        {
          count=count+1;
        }
      }
      else if(isdigit(a[i]))
      {
          while(isdigit(a[i]))
          {
              i++;
          }
      }
    }
    printf("number of words is %d",count);
}
