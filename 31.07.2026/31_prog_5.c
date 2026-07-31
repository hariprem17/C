#include<stdio.h>
#include<string.h>

void main()
{
    char a[]="abcabcdaabcde";
    int len=strlen(a);
    int max=0;
    for(int i=0;i<len;i++)
    {
        int count=0;
        int b[256]={0};
        for(int j=i;j<len;j++)
        {
            if(b[a[j]]<1)
            {
                b[a[j]]++;
                count++;
            }
            else
            {
                break;
            }

        }
        if(count>max)
        {
        max=count;
        }
    }

    printf("%d",max);
}
