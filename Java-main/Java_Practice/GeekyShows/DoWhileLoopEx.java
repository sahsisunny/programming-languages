import java.util.Scanner;
class DoWhileLoopEx
{
	public static void main(String args[])
	{
		Scanner obj=new Scanner(System.in);
		int i=1;
		System.out.println("Enter 0 to Exit!");
		do
		{
			System.out.print("Enter Any Integer Value : ");
			i=obj.nextInt();
			System.out.println("You Entered: "+i);

		}while(i!=0);
		System.out.println("Program End");
	}
}