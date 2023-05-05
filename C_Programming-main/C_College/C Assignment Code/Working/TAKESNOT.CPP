/*Takes Nothing Returns Nothing*/
#include<stdio.h>
#include<conio.h>
void main()
{
	void add(void);
	clrscr();
	add();                  //Function Call
	getch();
}
void add()
{
	int a,b;
	printf("Enter two integer : ");
	scanf("%d%d",&a,&b);
	printf("Sum is %d",a+b);
}