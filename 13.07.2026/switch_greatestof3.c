#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    switch(a>b)
    {
    case 1:
        printf("Greatest number is %d",a>c?a:c);

    case 0:
        printf("Greatest number is %d",b>c?b:c);
    }
}
