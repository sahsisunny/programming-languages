/* Write is program to check whether a number is +ve or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x>0)
    {
        printf("Positive number");
    }
    if(x<=0)
    {
        printf("Not positive number");
    }
    getch();
}
