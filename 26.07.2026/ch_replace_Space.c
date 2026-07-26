//Replace spaces with underscores (_).

#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    printf("enter a string:");
    fgets(a,sizeof(a),stdin);
    int len=strlen(a);

    for(int i=0;i<len;i++)
    {
        if(a[i]==' ')
        {
            a[i]='_';
        }
    }
    printf("%s",a);
}
