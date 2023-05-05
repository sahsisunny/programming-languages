import java.util.Scanner;
class ScannerInput
{
	public static void main(String[] args)
	{
		System.out.print("Enter Number: ");
		Scanner sc=new Scanner(System.in);
		int n = sc.nextInt();
		System.out.print(+n);
	}
}