#include<stdio.h>

void main()
{
    char a[50];
    int n=0;

    start:

    if(n<3)
    {
         printf("Enter a password:");
         scanf("%s",&a);
         n++;

         if(strcmp(a,"admin")==0)
         {
            goto print;
         }

         else
         {
            goto print2;
         }
    }
    else
    {
        printf("Limit reached,Try again later");
        goto stop;
    }

    print:
        printf("Login successfully");
        goto stop;

    print2:
        printf("Wrong password\n");
        goto start;

    stop:
        ;
}

