//WAP to enter marks of five subjects and calculate total,average and percentage.
#include <stdio.h>

int main()
{
    float english, cprogramming, fundamental, math,other;
    float total, average, percentage;
    /* Input marks of all five subjects */

    printf("\nEnter marks of C Programming : ");
    scanf("%f", &cprogramming);
    printf("\nEnter marks of Fundamental : ");
    scanf("%f", &fundamental);
    printf("\nEnter marks of Mathematics : ");
    scanf("%f", &math);
    printf("\nEnter marks of English : ");
    scanf("%f", &english);
    printf("\nEnter marks of Others Subject : ");
    scanf("%f", &other);

    /* Calculate total, average and percentage */
    total = english + cprogramming + fundamental + math+other;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    /* Print all results */
    printf("\n\n\t~~~\tTotal marks = %.2f\t~~\n", total);
    printf("\n\t~~\tAverage marks = %.2f\t~~\n", average);
    printf("\n\t~~\tPercentage = %.2f\t~~", percentage);

    return 0;
}
