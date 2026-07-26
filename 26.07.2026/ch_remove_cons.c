//Remove all consonat from a string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

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
        if((tolower(a[i])=='a'  || tolower(a[i])=='e' || tolower(a[i])=='i' || tolower(a[i])=='o' || tolower(a[i])=='u')||(!isalpha(a[i])) )
        {
            a[j]=a[i];
            j++;
        }
    }
    a[j]='\0';
    printf("%s",a);

}

