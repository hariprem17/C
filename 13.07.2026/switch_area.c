#include<stdio.h>

void main()
{
    int n;
    printf("Enter your choice:\n 1 for square \n 2 for circle \n 3 for rectange \n 4 for triangle \nEnter your choice=");
    scanf("%d",&n);
    float a,r,l,b,h;

    switch(n)
    {
    case 1:

        printf("Enter side of square");
        scanf("%f",&a);
        printf("Area of square=%f",a*a);
        break;

     case 2:

        printf("Enter radius of circle");
        scanf("%f",&r);
        printf("Area of circle=%f",3.14f*r*r);
        break;



     case 3:

        printf("Enter length and breath of rectangle");
        scanf("%f%f",&l,&b);
        printf("Area of rectangle=%f",l*b);
        break;


     case 4:

        printf("Enter breath and height of triangle");
        scanf("%f%f",&b,&h);
        printf("Area of triangle=%f",0.5*b*h);
        break;


     default:
        printf("Invalid choice");
}
}
