#include<stdio.h>

void main()
{
    char a[]="haree";
    char b[]="haree";

    int len1=strlen(a);
    int len2=strlen(b);
    int f=0;
    int found=1;

        for(int j=0;j<len2;j++)
        {
            if(a[0]==b[j])
            {
                f=j;
                break;
            }
        }


    for(int i=0;i<len1;i++)
    {
        if(a[i]==b[f])
        {
            f++;
        }
        else
        {
            found=0;
            break;
        }

        if(f==len2)
        {
            f=f%len2;
        }
    }

    if(found==1)
    {
        printf("rotation");

    }
    else
    {
        printf("not rotation");
    }

}
