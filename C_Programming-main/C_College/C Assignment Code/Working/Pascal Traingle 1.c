#include<stdio.h>
#include<conio.h>
void main()
{
    int space,n,i=1,j=1;
    for(i=0;i<=4;i++)
    {
        for(space=0;space<=(5-i);space++)
        {
            printf(" ");
        }
        n=1;
        for(j=0;j<=i;j++)
        {
            printf(" %d",n);
            n=n*(i-j)/(j+1);
        }
        printf("\n");
    }
    getch();
}
