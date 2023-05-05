#include<stdio.h>
void main()
{
    int num1;
    float fnum;
    double dnum;
    char cchar[10];

    printf("\nEnter the Integer Value : ");
    scanf("%d",&num1);

    printf("\nEnter the Float Value : ");
    scanf("%f",&fnum);

    printf("\nEnter the Double Value : ");
    scanf("%e",&dnum);

    printf("\nEnter the Character Message : ");
    scanf("%s",&cchar);

    printf("\n\n\t\tInteger Value = %d",num1);
    printf("\n\t\tFloat Value = %f",fnum);
    printf("\n\t\tDouble Value = %e",dnum);
    printf("\n\t\tCharacter Message = %s ",cchar);
    getchar();
}
