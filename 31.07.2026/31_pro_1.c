#include<stdio.h>
#include<string.h>

void main()
{
    char a[100];
    printf("enter a para:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';
    int l_len=0;

    for(int i=0;a[i]!='\0';i++)
    {
        int len=0;
        if(a[i]!=' ')
        {
            while(a[i]!=' ' && a[i]!='\0')
            {
                len=len+1;
                i++;
            }
        }
        else if(a[i]==' ')
        {
            while(a[i]==' ')
            {
                i++;
            }
        }
        if(len>l_len)
        {
            l_len=len;
        }
    }
    printf("long word is %d",l_len);
}
