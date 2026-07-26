#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    int freq[256]={0};
    printf("enter a string:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';
    int j=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(freq[a[i]]==0)
        {
            freq[a[i]]=1;
            a[j]=a[i];
            j++;
        }

    }
    a[j]='\0';

    printf("%s",a);
}
