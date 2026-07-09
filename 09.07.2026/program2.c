#include<stdio.h>
 void main()
 {
     int a;
     printf("enter a number:");
     scanf("%d",&a);
     printf("Result %d",a%7==0?a*2:a*3);
 }
