//Concatenate two strings without strcat().

#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    char b[30];
    printf("enter a string1:");
    fgets(a,sizeof(a),stdin);

    printf("enter a string2:");
    fgets(b,sizeof(b),stdin);

    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';

    int len1=strlen(a);
    int len2=strlen(b);
    int i=0;

    while(i<len2)
    {
       a[len1+i]=b[i];
       i++;
    }
    a[len1+i]='\0';

    printf("%s",a);

}
