#include<stdio.h>
enum day
{
    MON=1,TUE=8,WED=7,THU=2,FRI=5,SAT=6,SUN=9,
};
void main()
{
    enum day today=WED;

    switch(today)
    {
    case 1:
        printf("MONDAY");
        break;

    case 8:
        printf("tueday");
        break;

    case 7:
        printf("wednesday");
        break;

    case 2:
        printf("thursday");
        break;

    case 5:
        printf("friday");
        break;

    case 6:
        printf("saturday");
        break;

    case 7:
        printf("sunday");
        break;


    }
}
