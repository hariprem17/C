#include<stdio.h>

void main()
{
    char a[100];
    char b[100];
    printf("enter a string 1:");
    scanf("%s",a);
    printf("enter a string 2:");
    scanf("%s",b);

    int count=0;
    for(int j=0;b[j]!='\0';j++)
    {
        for(int i=0;a[i]!='\0';i++)
        {
            if(b[j]==a[i])
            {
                count=count+1;
            }
        }
    }
    printf("total occurance is %d",count);
}
