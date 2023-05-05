/* C Program to Count Even and Odd Numbers in an Array */
#include<stdio.h>
int main()
{
    int Size, i, a[10];
	int Even_Count = 0, Odd_Count = 0;
	clrscr();

	printf("\nEnter the Size of an Array :  ");
	scanf("%d", &Size);

	printf("\nEnter the Array Elements\n");
	for(i = 0; i < Size; i++)
	{
	    scanf("%d", &a[i]);
	}
	for(i = 0; i < Size; i ++)
	{
	    if(a[i] % 2 == 0)
		{
		    Even_Count++;
		}
	    else
		{
		    Odd_Count++;
		}
	}

	printf("\n Total Number of Even is = %d ", Even_Count);
	printf("\n Total Number of Odd is = %d ", Odd_Count);
	getch();
	return 0;
}
