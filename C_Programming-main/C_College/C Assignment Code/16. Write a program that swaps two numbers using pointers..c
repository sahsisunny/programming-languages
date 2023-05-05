#include <stdio.h>

int main()
{
    int x, y, *a, *b, temp;

    printf("Enter the value of First Number and Second Number\n");
    scanf("%d %d", &x, &y);

    printf("\n\n\t\tBefore Swapping");
    printf("\nFirst Number = %d",x);
    printf("\nSecond Number = %d",y);

    a = &x;
    b = &y;

    temp = *b;
    *b = *a;
    *a = temp;

    printf("\n\n\t\tAfter Swapping");
    printf("\nFirst Number = %d",x);
    printf("\nSecond Number = %d",y);
    return 0;
}
