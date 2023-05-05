#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    x=sizeof(34);
    y=sizeof(3.56);
    z=sizeof('a');
    printf("%d %d %d ", x,y,z);
    getch();
}
