#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1;
    print:
    if(i==5)
    {
        goto skip;
    }
    printf("%d",i);


    skip:
        getch();
}
