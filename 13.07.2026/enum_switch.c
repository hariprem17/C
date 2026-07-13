#include<stdio.h>
enum day
{
    MON=1,TUE,WED,THU,FRI,SAT,SUN,
};
void main()
{
    enum day today=WED;

    switch(today)
    {
    case 1:
        printf("MONDAY");
        break;

    case 2:
        printf("tueday");
        break;

    case 3:
        printf("wednesday");
        break;

    case 4:
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
