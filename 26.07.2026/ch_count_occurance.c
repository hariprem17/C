//Count the occurrences of a given word in a sentence.

#include<stdio.h>
#include<string.h>

void main()
{
    char a[100];
    char b[20];
    printf("enter a para:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';

    printf("enter a word:");
    fgets(b,sizeof(b),stdin);
    b[strcspn(b,"\n")]='\0';

    int len1=strlen(a);
    int len2=strlen(b);

    int start=0;
    int count=0;


    for(int i=0;i<=len1;i++)
    {
        int flag=1;
        int h=0;
        if(a[i]==' ' ||a[i]=='\0')
        {
            for(int j=start;j<i;j++)
            {
                if(len2!=i-start)
                {
                   flag=0;
                   break;
                }
                else if(a[j]!=b[h])
                {
                    flag=0;
                    break;
                }
                h++;
            }
            if(flag==1)
            {
                count=count+1;
            }
            while(a[i]==' ')
            {
                i++;
            }
            start=i;


        }
    }
    printf("%s occurance is %d",b,count);

}
