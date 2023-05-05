#include<stdio.h>
#include<conio.h>
void main()
{
    int space,n,i,j,no;
    printf("Enter the Number of Rows : ");
    scanf("%d",&no);
    for(i=0;i<=4;i++)
    {
        for(space=0;space<=i;space++)
        {
            printf(" ");
        }
        n=1;
        for(j=0;j<=4;j++)
        {
            printf(" %d",n);
            n=n*(i-j)/(j+1);
        }
        printf("\n");
    }
    getch();
}
