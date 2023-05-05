/*Takes Nothing Returns Something*/
#include<stdio.h>
#include<conio.h>
int add(void);
void main()
{
	int s;
	clrscr();
	s=add();
	printf("Sum is %d",s);
	getch();
}
int add()
{
	int a,b,c;
	printf("Enter Two Number : ");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}