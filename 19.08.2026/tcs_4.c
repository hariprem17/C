    #include<stdio.h>

    void main()
    {
        printf("Coffee\n"
    "1.	Espresso Coffee\n"
    "2.	Cappuccino Coffee\n"
    "3.	Latte Coffee\n"
    "Tea\n"
    "1.	Plain Tea\n"
    "2.	Assam Tea\n"
    "3.	Ginger Tea\n"
    "4.	Cardamom Tea\n"
    "5.	Masala Tea\n"
    "6.	Lemon Tea\n"
    "7.	Green Tea\n"
    "8.	Organic Darjeeling Tea\n"
    "Soups\n"
    "1.	Hot and Sour Soup\n"
    "2.	Veg Corn Soup\n"
    "3.	Tomato Soup\n"
    "4.	Spicy Tomato Soup\n"
    "Beverages\n"
    "1.	Hot Chocolate Drink\n"
    "2.	Badam Drink\n"
    "3.	Badam-Pista Drink\n"
    );

    char c[][20]={"Espresso Coffee","Cappuccino Coffee","Latte Coffee"};
    char t[][30]={"Plain Tea","Assam tea","Ginger tea","cardamom tea","masala tea","lemon tea","green tea","organic darjeeling tea"};
    char s[][30]={"hot and sour soup","veg corn soup","tomato soup","spicy tomato soup"};
    char b[][20]={"hot chocolate","badam milk","badam pista drink"};



    int num;
    char choise;
    printf("enter a choise:");
    scanf(" %c",&choise);

    int len_c=sizeof(c)/sizeof(c[0]);
    int len_s=sizeof(s)/sizeof(s[0]);
    int len_t=sizeof(t)/sizeof(t[0]);
    int len_b=sizeof(b)/sizeof(b[0]);


    printf("enter a num of your choise:");
    scanf("%d",&num);

    printf("Welcome to CCD!\n");

    switch(choise)
    {
    case 'c':
        if(num<=len_c)
        {
         printf("Enjoy your %s",c[num-1]);
         break;
        }
        else
        {
            printf("Invalid choise number");
            break;
        }

    case 't':
         if(num<=len_t)
        {
         printf("Enjoy your %s",t[num-1]);
         break;
        }
        else
        {
            printf("Invalid choise number");
            break;
        }
    case 's':
         if(num<=len_s)
        {
         printf("Enjoy your %s",s[num-1]);
         break;
        }
        else
        {
            printf("Invalid choise number");
            break;
        }
    case 'b':
         if(num<=len_b)
        {
         printf("Enjoy your %s",b[num-1]);
         break;
        }
        else
        {
            printf("Invalid choise number");
            break;
        }
    default:
        printf("Invalid choise");
    }
    }
