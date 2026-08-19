#include<stdio.h>

void main()
{
    char parent[20];
    int tot_child;
    char child;
    int total_com_parent;
    int schemeamount=5000,amount;

    printf("enter a parent name:");
    scanf("%s",parent);

    printf("enter Y(has child) or N(no child):");
    scanf(" %c",&child);

    if(child=='Y')
    {
    printf("enter number of children:");
    scanf("%d",&tot_child);

    char children[tot_child][20];

    for(int i=0;i<tot_child;i++)
    {
        printf("enter a children %d:",i+1);
        scanf("%s",children[i]);
    }

     total_com_parent=10*tot_child;

     amount=(schemeamount/100)*total_com_parent;

    printf("Total members:%d\n",1+tot_child);
    printf("commission details:\n");
    printf("%s:%dINR \n",parent,amount);

    for(int i=0;i<tot_child;i++)
    {
        printf("%s : 250INR \n",children[i]);
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


