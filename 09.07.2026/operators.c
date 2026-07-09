#include<stdio.h>
#include<conio.h>

void main()
{
    int a=89;
    int b=1046;
    //logical
    printf("AND :%d \n",a&b);
    printf("OR :%d \n",a|b);
    printf("EXOR :%d \n",a^b);
    printf("Not :%d\n",~a);
    printf("Left shift :%d\n",a<<4);
    printf("right shift :%d\n",b>>3);
    //cpnditional
    printf("Ternary :%d\n",a>b?a:b);
    //special
    printf("sizeof %d",sizeof(a));
    getch();
}
