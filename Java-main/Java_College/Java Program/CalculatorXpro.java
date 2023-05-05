import java.util.Scanner;
class CalculatorXpro
{
	public static void main(String args[])
	{
		Scanner s= new Scanner(System.in);
		System.out.print("\t\tEnter Integer= ");
		double a=s.nextDouble();
		System.out.print("\t\tEnter Integer= ");
		double b=s.nextDouble();
		System.out.println("\t\t\tEnter Symbol(+,-,*,/)");
		System.out.print("\t\t\t\t\t");
		String sym=s.next();
		switch(sym)
		{
			case "+" :
			{
				double res=a+b;
				System.out.println("\t\tADDITION is= "+res);
				break;
			}
			case "-" :
			{
				double res=a-b;
				System.out.println("\t\tSUBTRACTION is= "+res);
				break;
			}
			case "*" :
			{
				double res=a*b;
				System.out.println("\t\tMULTIPLICATION is= "+res);
				break;
			}
			case "/" :
			{
				double res=a/b;
				System.out.println("\t\tDIVISION is= "+res);
				break;
			}
			default :
			{
				System.out.println("\t\tWrong Input");
				break;
			}
		}
	}
}