#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    switch((a>=b)&&(a>=c))
    {
    case 1:
        printf("greatest is %d",a);
        break;

    case 0:
        switch((b>a)&&(b>c))
        {
        case 1:
            printf("greatest is %d",b);
            break;

        case 0:
            printf("greatest is %d",c);
            break;
        }
    }




}
