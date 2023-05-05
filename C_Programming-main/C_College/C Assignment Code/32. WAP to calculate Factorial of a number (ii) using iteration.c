#include <stdio.h>

// Iterative function to find factorial of a number using for loop

unsigned long factorial(int n)
{
	unsigned long fact = 1;
	int i;

	for (i = 1; i <= n; i++)
		fact = fact * i;

	return fact;
}

// Program to find factorial of a number

int main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	printf("The Factorial of %d is %lu", n, factorial(n));

	return 0;
}
