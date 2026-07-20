#include<stdio.h>

void main()
{
    char a[50];
    printf("enter a hexadecimal value:");
    scanf("%s",&a);
    int len=strlen(a);
    int decimal=0;
    int value;

    for(int i=0;i<len;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            value=a[i]-'0';
        }
        else if(a[i]>='A' && a[i]<='F')
        {
            value=a[i]-'A'+10;
        }
        else if(a[i]>='a' && a[i]<='f')
        {
            value=a[i]-'a'+10;
        }
        decimal=decimal*16+value;
    }
    printf("%d",decimal);


}
