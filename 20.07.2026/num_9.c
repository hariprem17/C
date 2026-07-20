//hex to decimal

#include<stdio.h>
#include<string.h>
#include<math.h>

void main()
{
    char n[50];
    printf("enter a hexadecimal number:");
    scanf("%s",n);
    int len=strlen(n);
    int k=0,dec=0;
    for(int i=len-1;i>=0;i++)
    {
        if(n[i]>= '0' && n[i]<= '9')
        {
          dec=dec+(n[i]- '0')*(int)(pow(16,k));

        }
        else if(n[i]>= 'A' && n[i]<='F')

        {
          dec=dec+(n[i]- 'A'+10)*(int)(pow(16,k));

        }
         k++;
    }
    printf("%d",dec);


}
