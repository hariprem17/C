//Copy one string to another without strcpy()

#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    char b[30];
    printf("enter a string:");
    fgets(a,sizeof(a),stdin);
    int i=0;

    while(a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
    printf("%s",b);
}
