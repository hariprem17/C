#include<stdio.h>

enum day
{
    MON=1,
    TUE,
    WED,
    THU,
    FRI=7,
    SAT,
    SUN,
};
void main()
{
  enum day today=SAT;
  printf("%d",today);
}
