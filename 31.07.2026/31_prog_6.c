#include<stdio.h>
#include<string.h>

void main()
{
    char a[]="aeiuobcabcda";
    int len=strlen(a);
    int max=0;
    for(int i=0;i<len;i++)
    {
        int count=0;
        int b[256]={0};
        for(int j=i;j<len;j++)
        {

            if(a[j]=='a' ||a[j]=='e' ||a[j]=='i'||a[j]=='o'||a[j]=='u')
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

