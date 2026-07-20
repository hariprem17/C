//decimal to octal
#include <stdio.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a[50],rem;
    int i=0;
    while(n>0)
    {
        rem=n%8;
        a[i]=rem;
        n=n/8;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }

}
