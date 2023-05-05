#include<stdio.h>
#include<conio.h>
void main()
{
    int Row=1,Column=1,Space,n;
    for(Row=0;Row<=4;Row++)
    {
        for(Space=0;Space<(4-Row);Space++)
        {
            printf(" ");
        }
        n=1;
        for(Column=0;Column<=Row;Column++)
        {
            printf(" %d",n);
            n=n*(Row-Column)/(Column+1);
        }
        printf("\n");
    }
    getch();
}
