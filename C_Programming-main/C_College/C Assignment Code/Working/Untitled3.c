#include<stdio.h>
#include<stdlib.h>
void main()
{
    int choice,a,b,c;
    while(1)
    {
    printf("\n\t\tM A I N  M E N U");
    printf("\n\t----------------------------");
    printf("\n\n\t\t1.Addition");
    printf("\n\t\t2.Subtraction");
    printf("\n\t\t3.Multiplication");
    printf("\n\t\t4.Division");
    printf("\n\t\t5.Exit");
    printf("\n\n\tEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :printf("Enter First Number : ");
                scanf("%d",&a);
                printf("Enter Second Number : ");
                scanf("%d",&b);
                c=a+b;
                printf("Sum of %d and %d is =%d",a,b,c);
                break;
        case 2 :printf("Enter First Number : ");
                scanf("%d",&a);
                printf("Enter Second Number : ");
                scanf("%d",&b);
                c=a-b;
                printf("Subtraction of %d and %d is =%d",a,b,c);
                break;
        case 3 :printf("Enter First Number : ");
                scanf("%d",&a);
                printf("Enter Second Number : ");
                scanf("%d",&b);
                c=a*b;
                printf("Multiplication of %d and %d is =%d",a,b,c);
                break;
        case 4 :printf("Enter First Number : ");
                scanf("%d",&a);
                printf("Enter Second Number : ");
                scanf("%d",&b);
                c=a/b;
                printf("Division of %d and %d is =%d",a,b,c);
                break;
        case 5 :exit(0);
        default : printf("Wrong Choice");

    }
    getch();
    }
}
