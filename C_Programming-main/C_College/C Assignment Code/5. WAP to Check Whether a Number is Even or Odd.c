//WAP to Check Whether a Number is Even or Odd.
#include <stdio.h>

int main()
{
    int a;
    printf("\n Enter an integer value:");
    scanf("%d", &a);
    if ((a%2)==0)
    printf("............%d is Even............", a);
    else
    printf("............%d is Odd............", a);
}
