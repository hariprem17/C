#include<stdio.h>
#include<string.h>

void main()
{
    //Input: strs = ["flower","flow","flight"]
    //Output: "fl"

    char a[]="flower";
    char b[]="flow";
    char c[]="flight";

    int n1=strlen(a);
    int n2=strlen(b);
    int n3=strlen(c);
    int start,max=0;
    int count=0,len;

    if(n1<=n2 && n1<=n3)
    {
        len=n1;
    }
    else if(n2<=n1 && n2<=n3)
    {
        len=n2;
    }
    else
    {
        len=n3;
    }
    for(int i=0;i<len;i++)
    {


        if(a[i]==b[i] && b[i]==c[i])
        {
            count++;
        }
        else
        {
            break;
        }

    }
    for(int i=0;i<count;i++)
    {
        printf("%c",a[i]);
    }


}
