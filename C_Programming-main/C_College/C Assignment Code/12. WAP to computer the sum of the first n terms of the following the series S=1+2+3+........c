// WAP to computer the sum of the first n terms of the following the series S=1+2+3+.......
#include<stdio.h>

int main()
{
    float i,sum;
    int N;

    /*read value of N*/
    printf("\n\t\t\tEnter the value of N: ");
    scanf("%d",&N);

    /*set sum by 0*/
    sum=0;

    /*calculate sum of the series*/
    for(i=1;i<=N;i++)
        sum= sum+ 1/i;

    /*print the sum*/

    printf("\n\t\t\tSum of the %d series is: %f\n",N,sum);

    return 0;
}
