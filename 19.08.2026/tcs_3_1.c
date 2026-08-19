#include<stdio.h>
#include<string.h>

void main()
{
    char parent[20];
    char child_name[50],count=1;
    char child;
    int total_com_parent;
    int schemeamount=5000,amount;

    printf("enter a parent name:");
    scanf("%s",parent);

    printf("enter Y(has child) or N(no child):");
    scanf(" %c",&child);

    if(child=='Y')
    {
    printf("enter name of children:");
    scanf("%s",child_name);

    int len=strlen(child_name);

    for(int i=0;i<len;i++)
    {
        if(child_name[i]==',')
        {
            count=count+1;
        }
    }


    total_com_parent=10*count;

    amount=(schemeamount/100)*total_com_parent;

    printf("Total members:%d\n",1+count);
    printf("commission details:\n");
    printf("%s:%dINR \n",parent,amount);

    int left=0,right;

    for(int i=0;i<=len;i++)
    {
        if(child_name[i]==',' || child_name[i]=='\0')
        {
            right=i;
            for(int j=left;j<right;j++)
            {
                printf("%c",child_name[j]);
            }
            printf(":250INR");
            printf("\n");
            left=right+1;

        }

    }

    }


    else if(child=='N')
    {
       total_com_parent=5;
       amount=(schemeamount/100)*total_com_parent;

       printf("Total members:1 \n");
       printf("commission details:\n");
       printf("%s :%dINR",parent,amount);

    }

}



