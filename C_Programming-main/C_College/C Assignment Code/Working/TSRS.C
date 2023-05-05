/*Takes Something Returns Something*/
#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
	int s,x,y;
	clrscr();
	printf("Enter Two Number : ");
	scanf("%d%d",&x,&y);
	s=add(x,y);
	printf("Sum is %d",s);
	getch();
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}