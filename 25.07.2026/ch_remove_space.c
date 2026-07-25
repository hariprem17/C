#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    printf("enter a para:");
    fgets(a,sizeof(a),stdin);
    int len=strlen(a);
    int j=0;

    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            a[j]=a[i];
            j++;
        }
    }
    a[j]='\0';
    printf("%s",a);
}
