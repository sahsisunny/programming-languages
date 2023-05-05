#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
FILE *fp;
void main()
{
    int roll,total;
    char name[10];
    fp=fopen("file.txt","r");
    fscanf(fp,"%d%s%d", &roll,name,&total);
    printf("\nRoll : %d, Name : %s and Total : %d",roll, name,total);
    getch();
    fclose(fp);
}
