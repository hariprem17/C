#include<stdio.h>
#include<string.h>

void main()
{
    char a[]="abcabcdaa";
    int len=strlen(a);
    int j;
    int max=0;
    for(int i=0;i<len;i++)
    {
        int count=1;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]==a[i])
            {
                break;
            }
            count++;

        }
        if(count>max)
        {
            max=count;
        }
    }
    printf("%d",max);
}
