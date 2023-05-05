# include <conio.h>
# include <stdio.h>
struct student
{
	int roll, total;
	char name[10], ans;
};

struct student s;
FILE   *fp;

void get()
{
	printf( "Enter Roll  : ....\b\b\b\b");
	scanf ( "%d" , &s.roll );
	printf( "Enter Name  : ............\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf ( "%s" , s.name  );
	printf( "Enter total : ....\b\b\b\b");
	scanf ( "%d" , &s.total);
	fflush(stdin);
	fwrite( (char*)&s, sizeof(s), 1, fp);
	fflush(stdin);
}

int main()
{
	char ans;

	fp = fopen("file2.txt" , "w");

	do
	{
		get();
		printf( "\nContinue (y/n) : " );
		scanf ( "%c" , &ans );
		fflush(stdin);
	}while(ans == 'y' || ans == 'Y') ;
	fclose(fp);
}
