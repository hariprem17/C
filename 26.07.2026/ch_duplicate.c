//Find duplicate characters in a string.

#include<stdio.h>

void main()
{
    char a[30];
    printf("enter a string:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';

    for(int i=0;a[i]!='\0';i++)
    {
        int flag=0;
        int found=0;
        for(int k=0;k<i;k++)
        {
            if(a[i]==a[k])
            {
                found=1;
            }
        }
         if(found==0)
         {

        for(int j=i+1;a[j]!='\0';j++)
         {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
         }
         if(flag==1)
         {

         printf("%c has duplicate values",a[i]);
         }
        }
    }
}
