//Find the shortest word in a sentence.

#include<stdio.h>
#include<string.h>

void main()
{
    char a[100];
    printf("enter a para:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';
    int len=strlen(a);

    int count1=len;
    int start_i=0;
    int end_i=0;
    int start=0;
    for(int i=0;i<=len;i++)
    {
        int count=0;
        if(a[i]==' ' || a[i]=='\0')
        {
            for(int j=start;j<i;j++)
            {
                count=count+1;
            }

            if(count<count1)
            {
                count1=count;
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
