#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char a[30];
    printf("enter a name:");
    scanf("%s",&a);
    int len=strlen(a);

    for(int i=0;i<len;i++)
    {
        switch(toupper(a[i]))
        {
        case 'A':
    printf("  **  \n"
           " *  * \n"
           "*    *\n"
           "******\n"
           "*    *\n"
           "*    *\n\n");
    break;

case 'B':
    printf("***** \n"
           "*    *\n"
           "***** \n"
           "*    *\n"
           "*    *\n"
           "***** \n\n");
    break;

case 'C':
    printf(" *****\n"
           "*     \n"
           "*     \n"
           "*     \n"
           "*     \n"
           " *****\n\n");
    break;

case 'D':
    printf("***** \n"
           "*    *\n"
           "*    *\n"
           "*    *\n"
           "*    *\n"
           "***** \n\n");
    break;

case 'E':
    printf("******\n"
           "*     \n"
           "***** \n"
           "*     \n"
           "*     \n"
           "******\n\n");
    break;
    case 'F':
    printf("******\n"
           "*     \n"
           "***** \n"
           "*     \n"
           "*     \n"
           "*     \n\n");
    break;

case 'G':
    printf(" *****\n"
           "*     \n"
           "*  ***\n"
           "*    *\n"
           "*    *\n"
           " *****\n\n");
    break;

case 'H':
    printf("*    *\n"
           "*    *\n"
           "******\n"
           "*    *\n"
           "*    *\n"
           "*    *\n\n");
    break;

case 'I':
    printf("******\n"
           "  **  \n"
           "  **  \n"
           "  **  \n"
           "  **  \n"
           "******\n\n");
    break;

case 'J':
    printf("******\n"
           "    * \n"
           "    * \n"
           "    * \n"
           "*   * \n"
           " ***  \n\n");
    break;
    case 'K':
    printf("*   * \n"
           "*  *  \n"
           "***   \n"
           "*  *  \n"
           "*   * \n"
           "*    *\n\n");
    break;

case 'L':
    printf("*     \n"
           "*     \n"
           "*     \n"
           "*     \n"
           "*     \n"
           "******\n\n");
    break;

case 'M':
    printf("*    *\n"
           "**  **\n"
           "* ** *\n"
           "*    *\n"
           "*    *\n"
           "*    *\n\n");
    break;

case 'N':
    printf("*    *\n"
           "**   *\n"
           "* *  *\n"
           "*  * *\n"
           "*   **\n"
           "*    *\n\n");
    break;

case 'O':
    printf(" **** \n"
           "*    *\n"
           "*    *\n"
           "*    *\n"
           "*    *\n"
           " **** \n\n");
    break;
    case 'P':
    printf("***** \n"
           "*    *\n"
           "*    *\n"
           "***** \n"
           "*     \n"
           "*     \n\n");
    break;

case 'Q':
    printf(" **** \n"
           "*    *\n"
           "*    *\n"
           "*  * *\n"
           "*   **\n"
           " *****\n\n");
    break;

case 'R':
    printf("***** \n"
           "*    *\n"
           "*    *\n"
           "***** \n"
           "*   * \n"
           "*    *\n\n");
    break;

case 'S':
    printf(" *****\n"
           "*     \n"
           " **** \n"
           "     *\n"
           "     *\n"
           "***** \n\n");
    break;

case 'T':
    printf("******\n"
           "  **  \n"
           "  **  \n"
           "  **  \n"
           "  **  \n"
           "  **  \n\n");
    break;
    case 'U':
    printf("*    *\n"
           "*    *\n"
           "*    *\n"
           "*    *\n"
           "*    *\n"
           " **** \n\n");
    break;

case 'V':
    printf("*    *\n"
           "*    *\n"
           "*    *\n"
           " *  * \n"
           " *  * \n"
           "  **  \n\n");
    break;

case 'W':
    printf("*    *\n"
           "*    *\n"
           "* ** *\n"
           "**  **\n"
           "*    *\n"
           "*    *\n\n");
    break;

case 'X':
    printf("*    *\n"
           " *  * \n"
           "  **  \n"
           "  **  \n"
           " *  * \n"
           "*    *\n\n");
    break;

case 'Y':
    printf("*    *\n"
           " *  * \n"
           "  **  \n"
           "  **  \n"
           "  **  \n"
           "  **  \n\n");
    break;

case 'Z':
    printf("******\n"
           "    * \n"
           "   *  \n"
           "  *   \n"
           " *    \n"
           "******\n\n");
    break;
        }
    }


}
