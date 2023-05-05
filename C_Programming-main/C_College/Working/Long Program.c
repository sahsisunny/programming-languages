#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 60
void Data_Entry();
void Data_List();
void Enter_Record();
void View_Record();
void Find_Topper();
void Edit_Record();
void Class_Average();
void Merit_List();

typedef struct Student
{
    int roll, cm, fm, mm, em, total;
    char name[20];
};
    struct Student s[MAX]={0,0,0,0,0,0};
    int i,ch;
void main()
{
    int choice;
    do
    {
        printf("\n\n\t\t,MAIN MENU\n");
        printf("\t\t\t..........................");
        printf("\n\n\t\t1. Enter Data for all Students");
        printf("\n\n\t\t2. View all Records");
        printf("\n\n\t\t3. Enter 1 Record");
        printf("\n\n\t\t4. View 1 Record");
        printf("\n\n\t\t5. List the Topper");
        printf("\n\n\t\t6. Edit 1 Record");
        printf("\n\n\t\t7. Find class Average");
        printf("\n\n\t\t8. Print Merit List");
        printf("\n\n\n\t\t\tEnter your choice(1 to 8): ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: Data_Entry();
            break;
            case 2: Data_List();
            break;
            case 3: Enter_Record();
            break;
            case 4: View_Record();
            break;
            case 5: Find_Topper();
            break;
            case 6: Edit_Record();
            break;
            case 7: Class_Average();
            break;
            case 8: Merit_List();
            break;
            default : printf("\n\n Wrong choice program terminate");
            printf("\nPress any key to terminate......");
            getch();
            exit(0);
        }
    }
    while(ch<=8);
}
void Data_Entry()
{
    for (i=0 ; i<MAX ; i++)
    {
        printf("\nEnter Data for record#%d",i+1);
        printf("\n.............................");
        printf("\nEnter Roll: ");
        scanf("%d", &s[i].roll);
        printf("\nEnter Name:");
        gets(s[i].name);
        printf("\nEnter marks for C Programming:");
        scanf("%d", &s[i].cm);
        printf("\nEnter marks for Fundamental:");
        scanf("%d", &s[i].fm);
        printf("\nEnter marks for Mathematics:");
        scanf("%d", s[i].mm);
        printf("\nEnter marks for Emglish:");
        scanf("%d", &s[i].em);
        s[i].total=s[i].cm+
        s[i].fm+s[i].mm+s[i].em;
    }
}
void Data_List()
{
    for(i=0 ; i<MAX ; i++)
    {
        printf("\nRecord#%d", i+1);
        printf("\n..............................");
        printf("\nRoll\t:%d", s[i].roll);
        printf("\nName\t:%s", s[i].name);
        printf("\nFundamental\t:%d", s[i].fm);
        printf("\nC Programming\t:%d", s[i].cm);
        printf("\nEnglish\t:%d", s[i].em);
        printf("\nMathematics\t:%d", s[i].mm);
        printf("\nTotal Mark:%d", s[i].fm+s[i].cm+s[i].em+s[i].mm);
        printf("\nPercentage:%f", (s[i].fm+s[i].cm+s[i].em+s[i].mm));
    }
}
void Enter_Record()
{
    for(i=0 ; s[i].roll=0 ; i++)
    {
        printf("\nEnter Roll: ");
        scanf("%d", &s[i].roll);
        fflush(stdin);
        printf("\nEnter Name: ");
        gets(s[i].name);
        printf("\nEnter marks for C Programming:");
        scanf("%d", &s[i].cm);
        printf("\nEnter marks for Fundamental:");
        scanf("%d", &s[i].fm);
        printf("\nEnter marks for Mathematics:");
        scanf("%d", s[i].mm);
        printf("\nEnter marks for Emglish:");
        scanf("%d", &s[i].em);
        fflush(stdin);
    }
}
void View_Record()
{
    int roll;
    printf("\nEnter Roll Number to View:");
    scanf("%d", &roll);
    for(i=0; s[i].roll!=roll; i++)
    {
        printf("\nRecord#%d", i+1);
        printf(".....................................");
        printf("\nRoll:%d", roll);
        printf("\n Name:%s", s[i].name);
        printf("\nFundamental:%d", s[i].fm);
        printf("\nC Programming:%d", s[i].cm);
        printf("\nEnglish:%d", s[i].em);
        printf("\nMathematics:%d", s[i].mm);
    }
}
void Find_Topper()
{
    int MAX_tot=0, top_roll , tot,idx;
    for(i=0 ; s[i].roll !=0; i++)
    {
        tot=s[i].cm+s[i].fm+s[i].em+s[i].mm;
        if(tot>MAX_tot)
        {
            MAX_tot=tot;
            top_roll=s[i].roll;
            idx=i;
        }
    }
    printf("\nRoll: %d", s[idx].roll);
    printf("\nName: %s", s[idx].name);
    printf("\nFudamental:%d", s[idx].fm);
    printf("\nC Programming: %d", s[idx].cm);
    printf("\nEnglish: %d",s[idx].em);
    printf("\nMathematics:%d", s[idx].mm);
}
void Edit_Record()
{
    int roll;
    printf("\nEnter Roll no. to Edit: ");
    scanf("%d",&roll);
    for(i=0 ; s[i].roll!=roll ; i++)
    {
        printf("\nPresent Data: \n");
        printf("\nName: %s", s[i].name);
        printf("\nFudamental:%d", s[i].fm);
        printf("\nC CProgramming:%d", s[i].cm);
        printf("\nEnglish:%d", s[i].em);
        printf("\nMathematics:%d", s[i].mm);
        printf("\n\nEnter changed values:\n");
        printf("\nName:");
        gets(s[i].name);
        printf("\nFudamental:");
        scanf("%d", &s[i].fm);
        printf("\nC Programming:");
        scanf("%d", &s[i].cm);
        printf("\nEnglis:");
        scanf("%d", &s[i].em);
        printf("\nMathematics:");
        scanf("%d", &s[i].mm);
        s[i].total=s[i].fm+s[i].cm+s[i].em+s[i].mm;
    }
}
void Class_Average()
{
    float avg=0.0f;
    for(i=0 ; s[i].roll!=0 ; i++)
        avg+=s[i].total;
    avg/=i+1;
    printf("\nClass Average is :%f", avg);
    getch();
}
void Merit_List()
{
    int flag,tmp;
    flag=0;
    while(flag==0)
    {
        flag=1;
        for(i=0; i<(MAX-1); i++)
        {
            if(s[i].total<s[i+1].total)
            {
                tmp=s[i].total;
                s[i].total=s[i+1].total;
                s[i+1].total=tmp;
                flag=0;
            }
        }
    }
    for(i=0; i<MAX; i++)
    {
        printf("\nRecord#%d", i+1);
        printf("\nRoll\t:%d", s[i].roll);
        printf("\nName\t:%s", s[i].name);
        printf("\nFundamental\t:%d", s[i].fm);
        printf("\nC Programming\t:%d", s[i].cm);
        printf("\nEnglish\t:%d", s[i].em);
        printf("\nMathematics\t:%d", s[i].mm);
    }
    getch();
}
