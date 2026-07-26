//Find the longest word in a sentence.

#include<stdio.h>
#include<string.h>


void main()
{
    char a[100];
    printf("enter a para:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';
    int len=strlen(a);
    int start=0;
    int start_i=0;
    int end_i=0;
    int count=0;

    for(int i=0;i<=len;i++)
    {

        int count1=0;

        if(a[i]==' ' || a[i]=='\0')
        {
            for(int j=start;j<i;j++)
            {
                count1=count1+1;
            }
            if(count1>count)
            {
                count=count1;
                start_i=start;
                end_i=i-1;
            }

        while(a[i]==' ')
         {
            i++;
         }
          start=i;

        }
    }

    for(int i=start_i;i<=end_i;i++)
    {
        printf("%c",a[i]);
    }
}
