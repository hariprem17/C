#include<stdio.h>

void main()
{
    char name[30];
    scanf("%s",name);
    puts("outputs are:");
    printf("%.5s",name);
    printf("%10.5s",name);
    puts(name);
    puts(name);
    puts(&name[4]);
    puts(name[2]);
}
