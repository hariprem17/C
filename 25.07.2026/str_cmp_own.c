#include<stdio.h>

void main()
{
    char a[]="haree";
    char b[]="haree";

    int flag=0;

    int len1=strlen(a);
    int len2=strlen(b);

    for(int i=0;i<len1;i++)
    {
        if(len1!=len2)
       {
         flag=1;
         break;
        }
        else if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
}
