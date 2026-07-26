//Reverse each word in a sentence.

#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    printf("enter a paragraph:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';
    int len=strlen(a);
    int start=0;
    for(int i=start;i<=len;i++)
    {
        int temp;
        if(a[i]==' '|| a[i]=='\0')
        {
            int left = start;
            int right = i - 1;

           while(left < right)
           {
               temp = a[left];
               a[left] = a[right];
               a[right] = temp;
               left++;
               right--;
            }
            while(a[i]==' ')
            {
                i++;
            }
            start=i;
            i--;
        }

    }
    printf("%s",a);
}
