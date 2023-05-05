#include <stdio.h>
#include<conio.h>
void main()
{
    int num;
    char ans;
    printf("\n Enter the month number:");
    scanf("%d", &num);
    printf("\n.............................................");
    switch(num)
    {
        case 1 : printf("\n\t\t\tJanuary");
        break;
        case 2 : printf("\n\t\t\tFebruary");
        break;
        case 3 : printf("\n\t\t\tMarch");
        break;
        case 4 : printf("\n\t\t\tApril");
        break;
        case 5 : printf("\n\t\t\tMay");
        break;
        case 6 : printf("\n\t\t\tJune");
        break;
        case 7 : printf("\n\t\t\tJuly");
        break;
        case 8 : printf("\n\t\t\tAugust");
        break;
        case 9 : printf("\n\t\t\tSeptember");
        break;
        case 10 : printf("\n\t\t\tOctober");
        break;
        case 11 : printf("\n\t\t\tNovember");
        break;
        case 12 : printf("\n\t\t\tDecember");
        break;
        default : printf("\n \t\t\tInvalid Input");
    }
    printf("\n.............................................");
    getchar();
}
