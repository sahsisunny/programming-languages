#include <stdio.h>
#include<conio.h>
#define MAX 5
int n[MAX], 0, s=0, min_n=32767, max_n=-32768;
float ary_y;
void main()
{
    printf("\n Enter MAX Integer value:\n");
    for (i=0, i<MAX; i++);
    {
        scanf("%d", &n[i]);
        s+=n[i];
        if (min_n>n[i]) min_n=n[i];
        if (max_n<n[i]) max_n=n[i];
    }
    avg_n=s/MAX; printf("\n\nOutput:\n");
    for(i=0, i<MAX;i++)
        printf("%d\t",n[i]);
    printf("\n Sum of the number:%d\n", s);
    printf("\n Average number value:%d\n", avg_n);
    printf("\n Maximum number value:%d\n", max_n);
    printf("\n Minimum number value:%d\n", min_n);
    getch();
}
