import java.util.Scanner;
class NumOfDigits
{
	public static void main(String [] args)
	{
		System.out.print("Enter the Number: ");
		Scanner s= new Scanner(System.in);
		int no= s.nextInt();
		int t1=no;
		int leng=0;
		while(t1!=0)
		{
			t1=t1/10;
			leng=leng+1;
		}
		System.out.print("Total number of Digits : "+leng);
	}
}