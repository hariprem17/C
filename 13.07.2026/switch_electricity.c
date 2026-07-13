#include<stdio.h>

void main()
{
    int a;
    printf("Enter units consumed=");
    scanf("%d",&a);

    switch((a>=0)&&(a<=200))
    {
    case 1:
        printf("Amount is %d",a*3);
        break;

    case 0:
        switch((a>200)&&(a<=500))
        {
        case 1:
        printf("Amount is %d",a*4);
        break;

        case 0:
            switch((a>500)&&(a<=1000))
            {
            case 1:
            printf("Amount is %d",a*8);
            break;

            case 0:
                switch(a>1000)
                {
                    printf("Amount is %d",a*16);
                    break;
                }
            }
    default:
        printf("Invalid negative number");
        }
    }
}
