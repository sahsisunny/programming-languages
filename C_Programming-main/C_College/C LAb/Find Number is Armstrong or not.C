#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int no,copy,re,n=0,ans=0;
    clrscr();
    printf("\n\n\t\tEnter a Number : ");
    scanf("%d", &no);
    copy=no;
    while(copy!=0)
    {
        copy=copy/10;
        n++;
    }
    copy=no;
    while(copy!=0)
    {
        re=copy%10;
        ans=ans+pow(re,n);
        copy=copy/10;
    }
    if(ans==no)
    {
        printf("\n\t%d is an Armstrong Number",no);
    }
    else
    {
        printf("\n\t%d is not an Armstrong Number",no);
    }
    getch();
    return 0;
}
