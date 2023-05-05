//Assignment NUMBER 20

# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <string.h>

void show_address(char *str);         //prototyping
char * concat(char *s1, char *s2);    //or declaration

int main()
{
	char *str1, *str2;
	int  choice;

	do
	{
		printf("\n\n\t\t\tM A I N   M E N U");
		printf("\n\t\t\t--------------------");
		printf("\n\n\t\t\t1. Show Address");
		printf("\n\t\t\t2. Concatenate");
		printf("\n\t\t\t3. Exit");
		printf("\n\n\t\t\tEnter your choice (1/2/3) : ");
		scanf ("%d" , &choice);

		switch(choice)
		{
			case 1 : printf("\nEnter a string : ");
					 scanf("%s",str1);
					 show_address(str1);
					 getch();
					 break;
			case 2 : printf("\nEnter first string : ");
					 scanf("%s",str1);
					 printf("Enter second string : ");
					 scanf("%s",str2);
					 str2 = concat(str1,str2);
					 printf("Concatenated string is : %s", str2);
					 getch();
					 break;
			case 3 : printf("\nJob Done...Exiting");
					 getch();
					 break;
			default: printf("\nWrong Choice ...... Re-enter");
					 getch();
		}
	} while(choice != 3);
}

void show_address(char *str)
{
	for( ; *str != '\0' ; str++)
		printf("\nAddress of %c is %x" , *str , str);
}
char * concat(char *s1 , char *s2)
{
	char *s;
	int i;
	s = (char*)malloc( strlen(s1) + strlen(s2) + 1 );

	for ( i=0 ; *s1 != '\0' ; s1++ , i++)
		*(s+i) = *s1;

	for ( ; *s2 != '\0' ; s2++ , i++)
		*(s+i) = *s2;

	*(s+i) = '\0';

	return s;
}


