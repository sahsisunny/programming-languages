#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
FILE *fp;
void main()
{
    int roll,total;
    char name[10];
    fp=fopen("file.txt","w");
    printf("\nEnter Roll, Name and Total:\n");
    scanf("%d %s %d", &roll,name,&total);
    fprintf(fp,"%d %s %d",roll,name,total);
    fclose(fp);
}
