//Compare two strings without strcmp().

#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    char b[30];

    printf("enter a string 1:");
    fgets(a,sizeof(a),stdin);

    printf("enter a string 2:");
    fgets(b,sizeof(b),stdin);

    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';

    int len1=strlen(a);
    int len2=strlen(b);
    int flag=1;

    if(len1!=len2)
    {
        flag=0;
    }
    else
    {
        for(int i=0;a[i]!='\0';i++)
        {
            if(a[i]!=b[i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
