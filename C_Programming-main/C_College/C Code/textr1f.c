#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
FILE *fp;
void main()
{
int roll,total;
char name[10];
fp=fopen("file3.txt","r");
fscanf(fp,"%d",&roll);
printf("Roll : %d",roll);
fscanf(fp,"%s",name);
printf("Name  : %d",name);
fscanf(fp,"%d",&total);
printf("Total : %d",total);
getch();
fclose(fp);
}
