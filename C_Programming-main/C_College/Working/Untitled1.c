#include<stdio.h>
#include<conio.h>

int add (int X, int Y)
{
	return(X+Y);
}
int subtract (int X, int Y)
{
	return (X-Y);
}
void main()
{
    int a, b, c, d ;
	printf("Enter first number:", a);
	scanf("%d",&a);
	printf("\nEnter second number:", b);
	scanf("%d",&b);
	c= add(a,b);
	d= subtract(a,b);
	printf("\nSum=%d, Difference=%d", c,d);
	getch();
}
