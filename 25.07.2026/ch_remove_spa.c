//Remove all spaces from a string.

#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    printf("enter a para:");
    fgets(a,sizeof(a),stdin);

    int len=strlen(a);

    for(int i=0;i<len;i++)
    {
        if(a[i]==' ')
        {
            for(int j=i;j<len;j++)
            {
                a[j]=a[j+1];
            }
            i--;

        }
    }
    printf("%s",a);
}
