#include<stdio.h>

void main()
{
    int a,b,c,d,e;
    printf("enter three number=");
    scanf("%d%d%d",&a,&b,&c);

    e=(a>b)?((a<c)?a:((b<c)?c:b)):((b<c)?c:(a<c)?c:a);
    printf("%d",e);

}
