//Remove duplicate characters from a string.

#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    printf("enter a string:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';

    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                for(int k=j;a[k]!='\0';k++)
                {
                    a[k]=a[k+1];
                }
                j--;
            }

        }
    }
    printf("%s",a);
}
