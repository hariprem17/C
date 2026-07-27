#include<stdio.h>

void main()
{
    int n;
    printf("enter no.of time sells a ballon:");
    scanf("%d",&n);
    char b[n];
    int freq[256]={0};

    for(int i=0;i<n;i++)
    {
        printf("enter color of ballon sell at %d times:",i+1);
        scanf(" %c",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        freq[b[i]]++;
    }

    for(int i=0;i<256;i++)
    {
        if(freq[i]%2!=0)
        {
            printf("\n%c is present %d (odd times)",i,freq[i]);
        }
    }
}
