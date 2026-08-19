#include<stdio.h>

void main()
{
    int n,k,j,m,p;
    printf("enter a no.of monkey:");
    scanf("%d",&n);

    printf("Number of eatable Bananas:");
    scanf("%d",&k);

    printf("Number of eatable Peanuts:");
    scanf("%d",&j);

    printf("Total number of Bananas:");
    scanf("%d",&m);

    printf("Total number of Peanuts:");
    scanf("%d",&p);

    int eat_bananas=m/k;
    int eat_peanuts=p/j;
    int extra=0;
    if(m%k !=0 || p%j!=0)
    {
        extra=1;
    }

    int total_monkey_eat=eat_bananas+eat_peanuts+extra;

    printf("number of monkey left on the tree:%d",n-total_monkey_eat);
    getch();
}

