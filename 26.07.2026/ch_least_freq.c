//Find the most frequent character in a string.

#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    int freq[256]={0};
    printf("enter a string:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';

    for(int i=0;a[i]!='\0';i++)
    {
        freq[a[i]]++;
    }
    int least=-1;
    for(int i=0;i<256;i++)
    {
      if(freq[i]>0)
      {
        if(least==-1 || freq[i]<freq[least])
        {
            least=i;
        }
      }
    }
    printf("%c has most frequency with %d",least,freq[least]);
}

