//WAP to find the largest number among three numbers.
#include <stdio.h>

void main()
{
    int num1, num2, num3;


    printf("Enter the values of Number 1, Number 2 and Number 3\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Number 1 = %d\tNumber 2 = %d\tNumber 3 = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Number 1 is the greatest among three \n");
        }
        else
        {
            printf("Number 2 is the greatest among three \n");
        }
    }
    else if (num2 > num3)
        printf("Number 2 is the greatest among three \n");
    else
        printf("Number 3 is the greatest among three \n");
}
