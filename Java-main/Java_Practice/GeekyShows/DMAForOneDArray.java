import java.util.Scanner;
class DMAForOneDArray
{
	public static void main(String args[])
	{
		Scanner obj= new Scanner(System.in);
		System.out.print("No. of Elements: ");
		int n=obj.nextInt();
		int num[] = new int[n];
		System.out.println("Enter " +n+ " Integer");
		for(int i=0; i<num.length; i++)
		{
			num[i] = obj.nextInt();
		}
		System.out.println("You Entered: ");
		for(int i=0; i<num.length; i++)
		{
			System.out.println(num[i]);
		}
	}
}