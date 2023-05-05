/*Write a program to find greater number*/
#include<stdio.h>
void main()
{
    int x,y,max;
    printf("Enter the Two number : ");
    scanf("%d %d",&x,&y);
    max=x>y ?x:y;
    printf("Greater number is %d",max);
    getchar();
}
