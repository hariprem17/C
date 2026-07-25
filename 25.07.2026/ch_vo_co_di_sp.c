//Count vowels, consonants, digits, spaces, and special characters.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char a[50];
    printf("enter a string:");
    gets(a);

    int len=strlen(a);
    int count_vowel=0,count_con=0,count_num=0,count_spa=0,count_spc=0;


    for(int i=0;i<len;i++)
    {
      if(isalpha(a[i]))
     {

        if(tolower(a[i])=='a' || tolower(a[i])=='e' || tolower(a[i])=='i'|| tolower(a[i])=='o' ||tolower(a[i])=='u')
        {
            count_vowel+=1;
        }
        else
        {
            count_con+=1;
        }
     }
    else if(isdigit(a[i]))
    {
            count_num+=1;
    }
    else if(a[i]==' ')
    {
            count_spa+=1;
    }
    else
    {
           count_spc+=1;
    }
    }

    printf("count of vowel is %d\n",count_vowel);
    printf("count of consonant is %d\n",count_con);
    printf("count of digit is %d\n",count_num);
    printf("count of spaces is %d\n",count_spa);
    printf("count of special char is %d",count_spc);
}
