//Run-Length Encoding (String)

#include<stdio.h>

void main()
{
    char a[50];
    char b[50];
    printf("enter a string:");
    scanf("%s",&a);
    int k=0;

    for(int i=0;a[i]!='\0';i++)
    {
        int count=0;
        for(int j=i;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
            }
            else if(a[i]!=a[j])
            {
                break;
            }
        }

        b[k]=a[i];
        b[k+1]=count+'0';
        k=k+2;

        i=i+count-1;

        b[k]='\0';
    }
    for(int i=0;b[i]!='\0';i++)
    {
        printf("%c",b[i]);
    }
}

