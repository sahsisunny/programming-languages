#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
FILE *fp;
int main()
{
   struct student
   {
       int roll_no,clas,year,total_marks;
       char name[100];
   } ;
   struct student stud[100];
   fp=fopen("Student.txt ","w");
   int i;
   for(i=0;i<10;i++)
   {
       printf("\nEnter the Roll Number : ");
       scanf("%d",&stud[i].roll_no);
       printf("\nEnter the Name : ");
       scanf("%s",&stud[i].name);
       printf("\nEnter the Total Marks : ");
       scanf("%d",&stud[i].total_marks);
       printf("\nEnter the Class : ");
       scanf("%d",&stud[i].clas);
       printf("\nEnter the Year : ");
       scanf("%d",&stud[i].year);
       fflush(stdin);
       fprintf(fp,"%d %s %d %d %d\n",stud[i].roll_no,stud[i].name,stud[i].total_marks,stud[i].clas,stud[i].year);
   }
   fclose(fp);
   getch();
   return 0;
}
