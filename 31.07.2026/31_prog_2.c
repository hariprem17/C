#include<stdio.h>

void main()
{
    char a[100];
    printf("enter a string:");
    scanf("%s",&a);

    for(int i=0;a[i]!='\0';i++)
    {
        int len=0;
        int visited=0;
        for(int k=0;k<i;k++)
        {
            if(a[k]==a[i])
            {
                visited=1;
            }
        }
        if(visited==0)
        {
        for(int j=i;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                len=len+1;
            }
        }
        if(len==1)
        {
            printf("first single character is %c",a[i]);
            break;
        }
        }
    }
}
