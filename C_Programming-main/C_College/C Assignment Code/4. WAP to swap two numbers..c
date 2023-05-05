//WAP to swap two numbers.
#include <stdio.h>
#include<conio.h>

int main()
{
  int x, y, t;
  printf("\nEnter First number : ");
  scanf("%d", &x);
  printf("Enter Second number : ");
  scanf("%d",&y);

  printf("........Before Swapping........\n\nFirst integer = %d\nSecond integer = %d\n\n", x, y);

  t = x;
  x = y;
  y = t;

  printf("........After Swapping........\n\nFirst integer = %d\nSecond integer = %d\n", x, y);
  return 0;
  getch();
}
