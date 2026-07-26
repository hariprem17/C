#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    int freq[256]={0};
    printf("enter a string:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';

    for(int i=0;a[i]!='\0';i++)
    {
        freq[a[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]>1)
        {
            printf("%c has duplicate value\n",i);
        }
    }
}
