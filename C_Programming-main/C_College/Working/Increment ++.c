#include<stdio.h>
#include<conio.h>
void main()
{
    int x=3;
    x--;     // x=x-1  Post Increment
    printf("%d", x);
    --x;     // x=x-1   Pre Increment
    printf("\n%d", x);
    getch();
}
