import java.util.Scanner;
class Calc
{
	public static void main(String args[])
	{
		System.out.println("\t\tMain Menu");
		int num, a,b,sum,sub,multi,divi;
		Scanner obj = new Scanner (System.in);
		System.out.print("Enter Integer= ");
		a=obj.nextInt();
		System.out.print("Enter Integer= ");
		b=obj.nextInt();
		Scanner obj1 = new Scanner (System.in);
		switch(num=obj.nextInt())
		{
			case 1 :
			{
				System.out.println("Addition");
				sum=a+b;
				break;
			}
			case 2 :
			{
				System.out.println("Subtraction");
				sub=a-b;
				break;
			}
			case 3 :
			{
				System.out.println("Multiplication");
				break;
			}
			case 4 :
			{
				System.out.println("Division");
				break;
			}
			case 5 :
			{
				System.out.println("Exit");
				break;
			}
			default :
			{
				System.out.println("Wrong Input");
				break;
			}
		}
			System.out.print("Enter the Number: ");
	}
}