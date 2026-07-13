#include<stdio.h>

void main()
{
    int i=1,n=5;
    print:
        printf("%d\n",i);
        i++;

        if(i<=5)
        {
            goto print;
        }

}
