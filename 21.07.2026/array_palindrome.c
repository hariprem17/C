//plaindrome

#include<stdio.h>

void main()
{
    int a[]={4,1,2,3,2,1,4};
    int n=sizeof(a)/sizeof(a[0]);
    int pal=1;

    for(int i=0;i<n;i++)
    {
            if(a[i]==a[n-i-1])
            {
                pal=1;
            }
            else if(a[i]!=a[n-i-1])
            {
                pal=0;
                break;
            }
        }

    if(pal==1)
    {
        printf("array is palindrome");
    }
    else
    {
        printf("array is not palindrome");
    }
}
