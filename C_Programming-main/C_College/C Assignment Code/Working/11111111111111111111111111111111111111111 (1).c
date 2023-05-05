// CPP program to find out
// Sum of elements at even and
// odd index positions separately
#include <stdio.h>

using namespace std;

// Function to calculate sum
void EvenOddSum(int arr[], int n)
{
	int even = 0;
	int odd = 0;
	for (int i = 0; i < n; i++) {
		// Loop to find even, odd sum
		if (i % 2 == 0)
			even += arr[i];
		else
			odd += arr[i];
	}

	cout << "Even index positions sum " << even;
	cout << "nOdd index positions sum " << odd;
}

// Driver function
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	EvenOddSum(arr, n);

	return 0;
}
Write a program in C to get any number (from user at run-time) to
// print the table of that number
// ------codescracker.com-------

#include<stdio.h>
#include<conio.h>
int main()
{
    int num, i, tab;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\nTable of %d is:\n", num);
    for(i=1; i<=10; i++)
    {
        tab = num*i;
        printf("%d * %2d = %2d\n", num, i, tab);
    }
    getch();
    return 0;
}
