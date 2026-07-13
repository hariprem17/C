#include<stdio.h>
#include<conio.h>
int print(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+print(n-1);
}
void main()
{
    int n;
    printf("enter value for n:");
    scanf("%d",&n);
    int ans=print(n);
    printf("%d",ans);

}
