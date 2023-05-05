#include <stdio.h>

void main()
{
    int num, i, j;
    printf("\n Enter a number:");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
            printf("%d", num);
        printf("\n");
    }
    getchar();
}
