#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,result;
    char op;
    printf("\t\t.............Welcome To Shield Squads CALCULATOR Program............");
    printf("\n\nEnter the first Number : ");
    scanf("%d",&num1);
    printf("Enter the Operator : ");
    scanf(" %c",&op);
    printf("Enter the second Number : ");
    scanf("%d",&num2);
    switch(op)
    {
        case '+':
            result=num1+num2;
            printf("\t\t\t\tAddition");
            printf("\nSum of  %d and %d is : %d",num1,num2,result);
        break;
        case '-':
            result=num1-num2;
            printf("\t\t\t\tSubtraction");
            printf("\nDifferences of  %d and %d is : %d",num1,num2,result);
        break;
        case '*':
            result=num1*num2;
            printf("\t\t\t\tMultiplication");
            printf("\nMultiplication of  %d and %d is : %d",num1,num2,result);
        break;
        case '/':
            result=num1/num2;
            printf("\t\t\t\tDivision");
            printf("\nDivision of  %d and %d is : %d",num1,num2,result);
        break;
        default :
            printf("\t\t\tThe operator is not valid");
    }
    getch();
}
