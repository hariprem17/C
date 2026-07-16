#include<stdio.h>

void main()
{
    int n;
    int a=0,b=0;
    printf("enter a turns:");
    scanf("%d",&n);
    char direction='R';
    int distance=10;

    while(n>0)
    {
        switch(direction)
        {
        case 'R':
            a=a+distance;
            direction='U';
            break;
        case 'U':
            b=b+distance;
            direction='L';
            break;
        case 'L':
            a=a-distance;
            direction='D';
            break;
        case 'D':
            b=b-distance;
            direction='A';
            break;
        case 'A':
            a=a+distance;
            direction='R';
            break;

        }
        n--;
        distance=distance+10;
    }
    printf("(%d,%d)",a,b);


}
