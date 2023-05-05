#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
FILE *fp;
void main()
{
    int roll,total;
    char name[10], ans;

    fp=fopen("file.txt","w");
    do
    {
        printf("\nEnter Roll, Name and Total:\n");
        scanf("%d %s %d", &roll,name,&total);
        fflush(stdin);
        fprintf(fp,"%d %s %d\n",roll,name,total);
        printf("\nCotiue(y/n) : ");
        scanf("%c",&ans);
        fflush(stdin);
    }
    while(ans=='y' || ans == 'Y');
    fclose(fp);
}

