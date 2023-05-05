import java.util.Scanner;
class SwitchStateEX
{
	public static void main(String args[])
	{
		int num;
		Scanner obj = new Scanner (System.in);
		switch(num=obj.nextInt())
		{
			case 1 :
			{
				System.out.println("Case 1 Statement");
				break;
			}
			case 2 :
			{
				System.out.println("Case 2 Statement");
				break;
			}
		}
		System.out.println("Last Statement");
	}
}