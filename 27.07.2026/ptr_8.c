#include<stdio.h>
#include<string.h>

int main()
{
    char a[30];
    int k;
    printf("enter a plain text:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';

    printf("Enter offset key:");
    scanf("%d",&k);

    if(k<0)
    {
        printf("Invalid");
        return 0;
    }

    int alphaKey = k % 26;   // for letters
    int digitKey = k % 10;   // for digits

    for(int i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");

    int sum;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
           sum=a[i]+alphaKey;
           if(sum>='a' && sum<='z')
           {
              a[i]=a[i]+alphaKey;
           }
           else if(sum>'z')
           {
               sum=sum-123;
               a[i]=97+sum;
           }
        }
        else if(a[i]>='0' && a[i]<='9')
        {
            sum=a[i]+digitKey;
            if(sum >='0' && sum<='9')
            {
                a[i]=a[i]+digitKey;
            }
            else if(sum>'9')
            {
                sum=sum-58;
                a[i]='0'+sum;
            }
        }
       else if(a[i]>='A' && a[i]<='Z')
        {
            sum=a[i]+alphaKey;
            if(sum>='A' && sum<='Z')
            {
              a[i]=a[i]+alphaKey;
            }
            else if(sum>'Z')
            {
              sum=sum-91;
              a[i]=65+sum;
            }
         }
    }
    printf("%s",a);
}
