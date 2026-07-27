#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    int k;
    printf("enter a plain text:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';

    printf("Enter offset key:");
    scanf("%d",&k);

    for(int i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");

    int sum;
    for(int i=0;a[i]!='\0';i++)
    {
        sum=a[i]+k;
        printf("")

    }
    printf("%s",a);
}

