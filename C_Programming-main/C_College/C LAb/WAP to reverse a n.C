//WAP to reverse a numbers
#include <stdio.h>

void main()
{
   int n, reverse = 0;
   clrscr();
   printf("Enter a number to reverse : ");
   scanf("%d", &n);
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n       = n/10;
   }
   printf("Reverse of entered number is : %d\n", reverse);
   getch();
}
