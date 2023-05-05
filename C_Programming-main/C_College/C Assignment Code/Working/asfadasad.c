#include <stdio.h>
#include<conio.h>
void main()
{
    int a[10],sum,i;
    float avg;
    printf("Enter 10 Numbers :\n");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        sum=sum+a[i];
        avg=sum/10.0;
    printf("Average =%f\n",avg);
    printf("Sum=%d",sum);
    getch();
}
