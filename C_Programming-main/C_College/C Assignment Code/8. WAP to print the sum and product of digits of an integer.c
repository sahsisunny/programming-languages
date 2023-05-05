// WAP to print the sum and product of digits of an integer.

#include <stdio.h>

int main()
{
    int n;
    int dig, sum,pro;

    printf("\nEnter an integer number :");
    scanf("%d",&n);

    /*Calculating Sum and Product*/
    sum=0;
    pro=1;

    while(n>0)
    {
        dig=n%10; /*get digit*/
        sum+=dig;
        pro*=dig;
        n=n/10;
    }

    printf("\nSUM of all Digits is : %d",sum);
    printf("\nPRODUCT of all digits: %d",pro);

    return 0;
}
