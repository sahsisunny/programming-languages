/*Write a program to check whether a number is positive or negative*/
#include<stdio.h>
void main()
{
    int x;
    printf("Enter a integer : ");
    scanf("%d",&x);
    if(x>0)
    {
        printf("%d is a Positive number",x);
    }
    if(x<=0)
    {
        printf("%d is a Non-positive number",x);
    }
    getchar();
}
