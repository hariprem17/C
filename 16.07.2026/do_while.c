#include<stdio.h>

void main()
{
    int n;

    int a,r,l,b,k,h;


    do{
     printf("1.area of square\n2.area of circle\n3.area of rectangle\n4.area of triangle\n5.Exit\n");
     printf("enter your choice:");
     scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("enter a side :");
        scanf("%d",&a);
        printf("Area of a square %d \n",a*a);
        printf("\n");
        break;

    case 2:
        printf("enter a radius :");
        scanf("%d",&r);
        printf("Area of a circle %f \n",3.14f*r*r);
        printf("\n");
        break;

    case 3:
        printf("enter a length and breath:");
        scanf("%d%d",&l,&b);
        printf("Area of a rectangle %d \n",l*b);
        printf("\n");
        break;

    case 4:
        printf("enter a breath height :");
        scanf("%d%d",&k,&h);
        printf("Area of a triangle %f \n",0.5f*k*h);
        printf("\n");
        break;

    default:
        if(n!=5)
        {
        printf("INVALID CHOICE \n");
        printf("\n");
        }
    }
    }while(n!=5);

    if(n==5)
    {
        printf("Exit!");
    }

}
