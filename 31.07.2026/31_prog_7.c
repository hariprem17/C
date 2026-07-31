#include<stdio.h>
#include<string.h>

void main()
{
    char a[]="hariprem";
    int b[256]={0};
    int n=strlen(a);

    for(int i=0;i<n;i++)
    {
       b[a[i]]++;
    }

    int max=0;
    int index;
    for(int i=0;i<256;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            index=i;

        }
    }
    printf("%c is repeated %d",index,b[index]);
}
