/*Takes Something Returns Nothing*/
#include<stdio.h>
#include<conio.h>
void add (int,int);
void main()
{
	int x,y;

	clrscr();
	printf("Enter two integer : ");
	scanf("%d%d",&x,&y);

	add(x,y);                  //Actual Arguments :Call By Value
	getch();
}
void add(int a,int b)              //Formal Arguments
{
	printf("Sum is %d",a+b);
}